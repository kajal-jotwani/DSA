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

int isLoop(Node* f){
    Node* p, *q ;
    p = q = f;

    do{
        p = p-> next;
        q = q-> next;
        q = q ? q-> next : q;
    } while(p && q && p != q);

    if(p == q){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int A[] = {10, 20, 40, 50, 60};
    create(A, 5);

    Node* t1, *t2;

    t1 = first->next->next;
    t2 = first->next->next->next->next;
    t2-> next = t1;

    cout<<isLoop(first)<<endl;

    return 0;
}
