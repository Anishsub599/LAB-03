#ifndef Queue_h
#define Queue_h
#include <iostream>
using namespace std;
class Queue
{
public:
    virtual void enqueue(int data) = 0;
    virtual void dequeue() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFUll() = 0;
    virtual void rear() = 0;
    virtual void front() = 0;
};
#endif