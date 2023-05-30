
#include "ArrayQueue.h"
#include "LinkedListQueue.h"
#include <iostream>
using namespace std;

int main()
{
    // ArrayQueue q;
    // cout<<q.isEmpty();
    // q.enqueue(2);
    // cout<<q.isEmpty();
    // q.enqueue(5);
    // q.enqueue(4);
    // q.dequeue();
    // q.Front();
    // q.back();

    LinkedListQueue l;
    cout << l.isEmpty();
    l.enqueue(2);
    cout << l.isEmpty();
    l.enqueue(10);
    l.enqueue(7);
    l.dequeue();
    l.front();
    l.back();
}