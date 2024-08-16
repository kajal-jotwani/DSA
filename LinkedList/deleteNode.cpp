#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int data) : data(data), next(nullptr) {}
};

// Convert array to linked list
Node* arrayToLinkedList(int arr[], int size) {
    if (size == 0) return nullptr;

    // Creating the initial head node
    Node* head = new Node(arr[0]);
    Node* current = head;

    for (int i = 1; i < size; i++) {
        current->next = new Node(arr[i]);
        current = current->next;
    }
    return head;
}

// Delete a node in a linked list
int Delete(Node*& head, int index) {
    if (head == nullptr || index < 1) return -1;

    Node* p = head;
    Node* q = nullptr;
    int x = -1;

    if (index == 1) {
        x = head->data;
        head = head->next;
        delete p;
    } else {
        for (int i = 0; i < index - 1 && p != nullptr; i++) {
            q = p;
            p = p->next;
        }
        if (p == nullptr) return -1;
        q->next = p->next;
        x = p->data;
        delete p;
    }
    return x;
}

// Display the linked list
void display(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    int arr[6] = {1, 4, 3, 5, 6, 7};
    int size = 6;
    Node* head = arrayToLinkedList(arr, size);

    std::cout << "Linked list: ";
    display(head);

    // Delete a node at index 3
    int deletedValue = Delete(head, 3);
    if (deletedValue != -1) {
        std::cout << "Deleted node value: " << deletedValue << std::endl;
    } else {
        std::cout << "Invalid index, nothing deleted." << std::endl;
    }

    std::cout << "Linked list after deletion: ";
    display(head);

    return 0;
}
