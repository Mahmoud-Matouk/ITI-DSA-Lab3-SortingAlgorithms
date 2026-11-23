#include "LinkedList.h"

    LinkedList::LinkedList() : head(nullptr), tail(nullptr), count(0) {};

    LinkedList::~LinkedList() {
        Node * curr = head;
        while (curr != nullptr) {
            Node * nextNode = curr->next;
            delete curr;
            curr = nextNode;
        }
    }

    int LinkedList::getNumberOfNodes() const {
        return this->count;
    }

    void LinkedList::display() const {
        Node * curr = head;
        while (curr != nullptr) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }

    void LinkedList::append(int data) {
        Node * newNode = new Node(data);
        if (head==nullptr) {
            head=tail=newNode;
        } else {
            newNode->prev=tail;
            newNode->next=nullptr;
            tail->next=newNode;
            tail=newNode;
        }
        count++;
    }