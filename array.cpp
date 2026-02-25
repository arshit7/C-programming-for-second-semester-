#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// function to insert at end
void insertEnd(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr};

    if(head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

int main() {
    Node* head = nullptr;

    insertEnd(head, 5);
    insertEnd(head, 15);
    insertEnd(head, 25);

    // print list
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}