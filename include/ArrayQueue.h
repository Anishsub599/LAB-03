#ifndef ArrayQueue_h
#define ArrayQueue_h
#define MAX_QUEUE_SIZE 20
#include "Queue.h"
class ArrayQueue
{
public:
    ArrayQueue();
    ~ArrayQueue();
    int front;
    int rear;
    int Array[MAX_QUEUE_SIZE];
    void enqueue(int data);
    void dequeue();
    bool isEmpty();
    bool isFUll();
    void Front();
    void back();
};
#endif