#ifndef LinkedListQueue_h
#define LinkedListQueue_h
#include "Queue.h"
#include "LinkedList.h"
class LinkedListQueue
{
    LinkedList List;

public:
    LinkedListQueue();
    ~LinkedListQueue();
    void enqueue(int data);
    void dequeue();
    bool isEmpty();
    bool isFUll();
    void front();
    void back();
};

#endif