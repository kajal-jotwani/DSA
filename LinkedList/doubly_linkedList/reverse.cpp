#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int d) {
        data = d;
        prev = nullptr;
        next = nullptr;
    }
} *first = nullptr;

void create(int A[], int n) {
    Node* t;
    Node* last;
    
    if (n <= 0) return;

    // Initialize the first node
    first = new Node(A[0]);
    last = first;

    // Create the rest of the list
    for (int i = 1; i < n; i++) {
        t = new Node(A[i]);
        last->next = t;  // Link the previous node's next to the new node
        t->prev = last;  // Link the new node's prev to the previous node
        last = t;        // Move the last pointer to the new node
    }
}


int Length(Node* p) {
    int len = 0;
    while (p) {
        len++;
        p = p->next;
    }
    return len;
}

void Reverse(Node* p) {
    Node* temp;
    while (p != NULL) {
        // Swap the next and prev pointers for each node
        temp = p->next;
        p->next = p->prev;
        p->prev = temp;
        
        // Move to the next node in the original list
        p = p->prev;

        // Update the first pointer when p reaches the last node
        if (p != NULL && p->next == NULL) {
            first = p;
        }
    }
}

void Display(Node* p) {
    while (p) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}


int main() {
    int A[] = {2, 4, 6, 8, 3, 7};
    create(A, 6);

    cout << "Length: " << Length(first) << endl;
    cout << "List: ";
    Reverse(first);
    Display(first);

    return 0;
}
