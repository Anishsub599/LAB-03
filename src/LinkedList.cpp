#include "LinkedList.h"

LinkedList ::LinkedList()
{
    HEAD = NULL;
    TAIL = NULL;
}

LinkedList ::~LinkedList() {}
// returns the boolean either linkedlist is empty or not
bool LinkedList ::isEmpty()
{
    if (HEAD == NULL && TAIL == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
// returns the boolean either linkedlist is full or not
bool LinkedList ::isFull()
{
    if (HEAD == TAIL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
// adds the node of the giveen data to the tail
void LinkedList ::addToTail(int data)
{
    Node *newNode = new Node();
    newNode->info = data;

    if (isEmpty())
    {
        HEAD = newNode;
        TAIL = newNode;
        newNode->next = NULL;
        TAIL = newNode;
    }
    else
    {
        TAIL->next = newNode;
        newNode->next = NULL;
        TAIL = newNode;
    }
}
// removes the data present at the head
int LinkedList::removeFromHead()
{
    if (HEAD != NULL)
    {
        Node *NodeToDelete = new Node();
        NodeToDelete = HEAD;
        int data = NodeToDelete->info;
        HEAD = NodeToDelete->next;
        delete NodeToDelete;
        return data;
    }
}
int LinkedList::front()
{
    return HEAD->info;
}
int LinkedList::back()
{
    return TAIL->info;
}