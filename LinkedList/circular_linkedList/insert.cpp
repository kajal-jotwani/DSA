#include <iostream>
using namespace std;



struct Node {
    int data;
    Node* next;
} *Head = nullptr;

void create(int A[], int n) {
    Node *t, *last;
    Head = new Node;
    Head->data = A[0];
    Head->next = Head;
    last = Head;

    for (int i = 1; i < n; i++) {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void Display(Node* h) {
    do {
        std::cout << h->data << " ";
        h = h->next;
    } while (h != Head);
    std::cout << std::endl;
}

void RDisplay(Node* h) {
    static bool flag = false;
    if (h != Head || !flag) {
        flag = true;
        std::cout << h->data << " ";
        RDisplay(h->next);
    }
    flag = false;
}

int Length(Node* p) {
    int len = 0;
    do {
        len++;
        p = p->next;
    } while (p != Head);
    return len;
}

void Insert(Node* p, int index, int x) {
    Node* t;
    if (index < 0 || index > Length(p)) return;

    if (index == 0) {
        t = new Node;
        t->data = x;
        if (Head == nullptr) {
            Head = t;
            Head->next = Head;
        } else {
            while (p->next != Head) p = p->next;
            p->next = t;
            t->next = Head;
            Head = t;
        }
    } else {
        for (int i = 0; i < index - 1; i++) p = p->next;
        t = new Node;
        t->data = x;
        t->next = p->next;
        p->next = t;
    }
}

int Delete(Node* p, int index) {
    Node* q;
    int x;

    if (index < 0 || index > Length(Head)) return -1;

    if (index == 1) {
        while (p->next != Head) p = p->next;
        x = Head->data;
        if (Head == p) {
            delete Head;
            Head = nullptr;
        } else {
            p->next = Head->next;
            delete Head;
            Head = p->next;
        }
    } else {
        for (int i = 0; i < index - 2; i++) p = p->next;
        q = p->next;
        p->next = q->next;
        x = q->data;
        delete q;
    }
    return x;
}

int main() {
    int A[] = {2, 3, 4, 5, 6};
    create(A, 5);

    std::cout << "Original List: ";
    Display(Head);

    // Insert a new element at the beginning
    Insert(Head, 0, 1);
    std::cout << "After inserting 1 at index 0: ";
    Display(Head);

    // Insert a new element at index 3
    Insert(Head, 3, 10);
    std::cout << "After inserting 10 at index 3: ";
    Display(Head);

    // Delete the first element
    Delete(Head, 1);
    std::cout << "After deleting the element at index 1: ";
    Display(Head);

    // Delete an element at index 4
    Delete(Head, 4);
    std::cout << "After deleting the element at index 4: ";
    Display(Head);

    // Recursively display the list
    std::cout << "Recursive Display: ";
    RDisplay(Head);
    std::cout << std::endl;

    return 0;
}
