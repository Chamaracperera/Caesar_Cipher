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
