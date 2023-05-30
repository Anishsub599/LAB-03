#ifndef Linkedlist_h
#define Linkedlist_h
#include <iostream>
using namespace std;
class Node
{

public:
    int info;
    Node *next;
    Node() {}
};
class LinkedList
{

public:
    Node *HEAD;
    Node *TAIL;
    LinkedList();
    ~LinkedList();
    bool isEmpty();
    bool isFull();
    void addToTail(int data);
    int removeFromHead();
    int front();
    int back();
};

#endif