#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
} *first = nullptr;

void Display(Node *p) {
    while (p != nullptr) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void create(int A[], int n) {
    Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = nullptr;
    last = first;

    for (int i = 1; i < n; i++) {
        t = new Node;
        t->data = A[i];
        t->next = nullptr;
        last->next = t;
        last = t;
    }
}

int count(Node *p) {
    int l = 0;
    while (p != nullptr) {
        l++;
        p = p->next;
    }
    return l;
}

void Reverse1(Node *p) {
    int *A, i = 0;
    Node *q = p;
    int n = count(p);  // Count the number of nodes

    A = new int[n];
    while (q != nullptr) {
        A[i] = q->data;
        q = q->next;
        i++;
    }

    q = p;
    i--;
    while (q != nullptr) {
        q->data = A[i];
        q = q->next;
        i--;
    }

    delete[] A;
}
void Reverse2(Node *p) {
    Node *q = nullptr, *r = nullptr;
    
    while (p != nullptr) {
        r = q;       
        q = p;       
        p = p->next; 
        q->next = r; 
    }
    
    first = q;  
}


void Reverse3(Node *q, Node *p) {
    if (p) {
        Reverse3(p, p->next);
        p->next = q;
    } else {
        first = q;
    }
}

int main() {
    int A[] = {10, 20, 40, 50, 60};
    create(A, 5);

    Reverse1(first);  // Reverse using array
    Display(first);

    Reverse2(first);  // Reverse using pointers
    Display(first);

    Reverse3(nullptr, first);  // Reverse using recursion
    Display(first);

    return 0;
}
