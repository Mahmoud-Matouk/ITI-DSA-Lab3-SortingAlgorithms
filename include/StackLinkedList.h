#ifndef STACKLINKEDLIST_H
#define STACKLINKEDLIST_H
#include "Node.h"
#include <iostream>
using namespace std;

class StackLinkedList {
    Node *head;
    Node *tail;
    int count;

    public:
    StackLinkedList();
    ~StackLinkedList();
    int getNumberOfElements() const;
    void display() const;
    void push(int data);
    int pop();
    int factorial(int num);
};

#endif