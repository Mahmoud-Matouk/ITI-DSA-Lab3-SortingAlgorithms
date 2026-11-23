#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
#include <iostream>
using namespace std;

class LinkedList {
    public:
    Node *head;
    Node *tail;
    int count;
    LinkedList();
    ~LinkedList();
    void insertAfter(int data, int afterData);
    void insertBefore(int data, int beforeData);
    int getNumberOfNodes() const;
    int getDataByIndex(int index) const;

    void display() const;
    void append(int data);
    // void insertAtHead(int data);
    // void deleteNode(int data);
};

#endif