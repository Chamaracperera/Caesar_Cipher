#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "queue.h"

//Queue setup
void CreateQueue(CircularQueue *q) {
    q->front = 0;
    q->rear = MAXQUEUE - 1;
    q->count = 0;
    for (int i = 0; i < MAXQUEUE; i++) {
        q->items[i] = 'A' + i;
        q->count++;
    }
}
//encrypt
char Rotate(CircularQueue *q, char ch, int key) {
    if (!isalpha(ch)) return ch;
    int is_lower = islower(ch);
    ch = toupper(ch);
    int idx = ch - 'A';
    int new_idx = (idx + key + MAXQUEUE) % MAXQUEUE;
    char shifted = q->items[new_idx];
    return is_lower ? tolower(shifted) : shifted;
}

void EncryptMessage(CircularQueue *q, char *message, int key) {
    for (int i = 0; message[i] != '\0'; i++) {
        printf("%c", Rotate(q, message[i], key));
    }
    printf("\n");
}

int main() {
    CircularQueue q;
    CreateQueue(&q);

    char choice;
    char message[100];
    int key;

    printf("Encryption (E) or Decryption (D)?: ");
    scanf(" %c", &choice);
    getchar();

    printf("Enter your message: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = 0;

    printf("Enter shift key: ");
    scanf("%d", &key);

    printf("*****************************\n");

    if (choice == 'E') {
        printf("Encrypted Message: ");
        EncryptMessage(&q, message, key);
    } else if (choice == 'D') {
        printf("Original Message: ");
        EncryptMessage(&q, message, -key);  // Decryption is reverse shift
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
