#include "StackLinkedList.h"

StackLinkedList::StackLinkedList() : head(nullptr), tail(nullptr), count(0) {}

StackLinkedList::~StackLinkedList() {
    Node *curr = head;
    while (curr != nullptr) {
        Node *nextNode = curr->next;
        delete curr;
        curr = nextNode;
    }
    head = nullptr;
    tail = nullptr;
    count = 0;
}

int StackLinkedList::getNumberOfElements() const {
    return this->count;
}

void StackLinkedList::display() const {
    if (head == nullptr) {
        cout << "Can't Display it's Empty";
        return;
    }
    Node *curr = tail;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->prev;
    }
    cout << endl;
}

void StackLinkedList::push(int data) {
    Node *newNode = new Node(data);
    if (head == nullptr) {
        head = tail = newNode;
    } else {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    count++;
}

int StackLinkedList::pop() {
    if (tail == nullptr) {
        cout << "It's Empty!" << endl;
        return -1;
    }

    int value = tail->data;
    Node *temp = tail;

    if (tail->prev != nullptr) {
        tail = tail->prev;
        tail->next = nullptr;
    } else {
        head = nullptr;
        tail = nullptr;
    }

    count--;
    delete temp;
    return value;
}

