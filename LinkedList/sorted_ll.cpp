#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* first = nullptr;  // Initialize the first pointer to nullptr

// Function to display the linked list
void Display(Node* p) {
    while (p != nullptr) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

// Function to create a linked list from an array
void create(int A[], int n) {
    Node* last;
    first = new Node;  // Allocate memory for the first node
    first->data = A[0];
    first->next = nullptr;
    last = first;

    for (int i = 1; i < n; i++) {
        Node* t = new Node;  // Allocate memory for the new node
        t->data = A[i];
        t->next = nullptr;
        last->next = t;
        last = t;
    }
}

// Function to insert a new node into the sorted linked list
void SortedInsert(Node* p, int x) {
    Node* t = new Node;  // Allocate memory for the new node
    t->data = x;
    t->next = nullptr;

    Node* q = nullptr;

    if (first == nullptr) {  // If the list is empty
        first = t;
    } else {
        while (p != nullptr && p->data < x) {  // Find the correct position
            q = p;
            p = p->next;
        }
        if (p == first) {  // Insert at the beginning
            t->next = first;
            first = t;
        } else {  // Insert in the middle or end
            t->next = q->next;
            q->next = t;
        }
    }
}

int main() {
    int A[] = {10, 20, 30, 40, 50};  // Example array
    create(A, 5);  // Create the initial linked list from the array

    SortedInsert(first, 90);  // Insert 15 into the sorted linked list

    Display(first);  // Display the linked list

    return 0;
}
