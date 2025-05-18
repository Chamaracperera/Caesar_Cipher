#ifndef QUEUE_H
#define QUEUE_H

#define MAXQUEUE 26
typedef char QueueElement;

typedef struct {
    int front;
    int rear;
    int count;
    QueueElement items[MAXQUEUE];
} CircularQueue;

void CreateQueue(CircularQueue *q);


#endif
