#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) : data(data), next(nullptr) {}
};

void Inserting_node(Node*& head, int index, int x) {
    Node* newNode = new Node(x);

    // Case 1: Insert at the beginning
    if (index == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    // Case 2: Insert at a specific position or append if index is greater than the list size
    Node* temp = head;
    int currentIndex = 0;

    // Traverse the list to find the node just before the insertion point
    while (temp != nullptr && currentIndex < index - 1) {
        temp = temp->next;
        currentIndex++;
    }

    if (temp == nullptr) {
        // If the position is greater than the list size, append the node at the end
        cout << "Index is greater than the list size, inserting at the end." << endl;
        Node* last = head;
        while (last->next != nullptr) {
            last = last->next;
        }
        last->next = newNode;
    } else {
        // Insert the new node at the desired position
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    // Creating a linked list: 1 -> 4 -> 3 -> 6 -> 7 -> nullptr
    Node* head = new Node(1);
    head->next = new Node(4);
    head->next->next = new Node(3);
    head->next->next->next = new Node(6);
    head->next->next->next->next = new Node(7);

    cout << "Initial list: ";
    display(head);

    // Insert 5 at index 0
    Inserting_node(head, 0, 5);
    cout << "After inserting 5 at index 0: ";
    display(head);

    // Insert 25 at index 2
    Inserting_node(head, 2, 25);
    cout << "After inserting 25 at index 2: ";
    display(head);

    // Insert 40 at index 10 (greater than list size, should be at the end)
    Inserting_node(head, 10, 40);
    cout << "After inserting 40 at index 10: ";
    display(head);

    return 0;
}
