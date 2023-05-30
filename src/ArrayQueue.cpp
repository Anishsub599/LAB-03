#include "ArrayQueue.h"

ArrayQueue::ArrayQueue()
{
    front = -1;
    rear = -1;
}
ArrayQueue::~ArrayQueue()
{
}
bool ArrayQueue::isEmpty()
{
    if (rear == front)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool ArrayQueue::isFUll()
{
    if (rear == MAX_QUEUE_SIZE - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void ArrayQueue::dequeue()
{
    if (isEmpty())
    {
        cout << "Queue Underflow";
    }
    else
    {
        front++;
        int element = Array[rear];
        rear--;
        cout << "Popped " << element << endl;
    }
}
void ArrayQueue::enqueue(int data)
{
    if (isFUll())
    {
        cout << "Queue Overflow\n";
    }
    else
    {
        rear++;
        Array[rear] = data;
    }
}
void ArrayQueue::Front()
{
    cout << "Element at the front: " << Array[front] << endl;
}
void ArrayQueue::back()
{
    cout << "Element at the rear: " << Array[rear] << endl;
}