#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) : data(data), next(nullptr) {}
};

int main() {
    // Create individual nodes
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);

     // Link the nodes together
    head->next = second;
    second->next = third;

    // Print the linked list
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
return 0;
}

