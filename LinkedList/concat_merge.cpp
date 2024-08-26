#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
} *first = nullptr, *second = nullptr, *third = nullptr;

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


void create2(int A[], int n) {
    Node *t, *last;
    second = new Node;
    second->data = A[0];
    second->next = nullptr;
    last = second;

    for (int i = 1; i < n; i++) {
        t = new Node;
        t->data = A[i];
        t->next = nullptr;
        last->next = t;
        last = t;
    }
}

void Concat(Node* p, Node* q)
{
    third = p;
     while(p -> next != NULL){
        p = p -> next;
     }

    p -> next = q;
}

void Merge(Node* p, Node* q)
{
    Node* last = NULL;

    if(p-> data < q-> data){
        third = last = p;
        p = p-> next;
        third-> next = NULL;
    }
    else
    {
        third = last = q;
        q = q-> next;
        third-> next = NULL;
    }

    while(p && q)
    {
        if(p-> data < q-> data)
        {
            last-> next = p;
            last = p;
            p = p-> next;
            last-> next = NULL;
        }
        else{
            last-> next = q;
            last = q;
            q = q-> next;
            last-> next = NULL;
        }
    }

    if(p){
        last -> next = p;
    }
    else{
        last -> next = q;
    }

}


int main() {
    int A[] = {10, 20, 40, 50, 60};
    int B[] = {5, 14, 17, 32, 45, 63};
    create(A, 5);
    create2(B, 6);

    // Display(first);
    // Display(second);

    // Concat(first, second);
    // Display(third);

    Merge(first, second);
    Display(third);

     return 0;
}