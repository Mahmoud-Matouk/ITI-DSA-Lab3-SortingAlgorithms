#include "StackLinkedList.h"
#include "LinkedList.h"

int factorial(int num) {
    int result = 1;
    if (num < 0) return -1;
    else if (num <= 1) return 1;

    StackLinkedList stack;
    for(int i = 1; i<= num; i++) stack.push(i);
    for(int i = 0; i < num; i++) result *= stack.pop();

    return result;
}

void swap(int& x, int& y) {
    x=x+y;
    y=x-y;
    x=x-y;
}

void BubbleSort(LinkedList* list){
    if (list->head == nullptr) {
        cout << "Empty List" << endl;
        return;
    }

    Node * sorted = nullptr;
    bool isSwapped = true;

    while (isSwapped && sorted != list->head->next) {
        isSwapped = false;
        Node * curr = list->head;
        while (curr->next != sorted) {
            if (curr->data > curr->next->data) {
                swap(curr->data , curr->next->data);
                isSwapped = true;
            }
            curr=curr->next;
        }
        sorted= (sorted == nullptr) ? list->tail : sorted->prev;
    }
}

void SelectionSort(LinkedList* list){
    if (list->head == nullptr) {
        cout << "Empty List" << endl;
        return;
    }

    Node * sorted= list->head;
    while (sorted->next != nullptr) {
        Node * min = sorted;
        Node * curr = sorted->next;

        while(curr != nullptr) {
            if (curr->data < min->data) {
                min = curr;
            }
            curr = curr->next;
        }

        if (sorted->data > min->data) swap(sorted->data, min->data);
        sorted = sorted->next;
    }
}

Node* getMid(Node* start, Node* end) {
    if (start == nullptr) return nullptr;
    Node* slow = start;
    Node* fast = start;

    while (fast != end && fast->next != end){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

void binarySearch(LinkedList* list, int search) {
    if (list->head == nullptr) {
        cout << "Empty List" << endl;
        return;
    }

    Node* start = list->head;
    Node* end = list->tail;

    while (start != end->next) {
        Node* mid = getMid(start,end);
        if (mid->data == search) {
            cout << "Found: " << search << endl;
            return;
        } else if (mid->data < search) {
            start = mid->next;
        } else {
            end = mid->prev;
        }
    }
    cout << "Not Found" << endl;
}

int main() {
    cout << factorial(5) << endl;
    LinkedList *list = new LinkedList();
    list->append(4);
    list->append(1);
    list->append(3);
    list->append(9);
    list->append(2);
    BubbleSort(list);
    // SelectionSort(list);
    binarySearch(list, 9);
    list->display();
    return 0;
}
