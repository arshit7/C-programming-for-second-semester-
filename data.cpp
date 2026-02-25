#include <iostream>
using namespace std;

// Node structure (same data type)
struct Node {
    int data;
    Node* next;
};

int main() {
    // nodes create
    Node* head = new Node{10, nullptr};
    Node* second = new Node{20, nullptr};
    Node* third = new Node{30, nullptr};

    // link nodes
    head->next = second;
    second->next = third;

    // print list
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}