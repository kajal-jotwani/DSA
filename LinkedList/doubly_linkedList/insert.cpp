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

void Insert(Node* p, int index, int x) {
    Node* t;

    // Inserting at the beginning
    if (index == 0) {
        t = new Node(x);
        t->prev = nullptr;
        t->next = first;
        if (first != nullptr) {  // If list is not empty
            first->prev = t;
        }
        first = t;
    } 
    // Inserting at a position other than the beginning
    else {
        for (int i = 0; i < index - 1 && p != nullptr; i++) {
            p = p->next;
        }

        // Check if p is valid
        if (p != nullptr) {
            t = new Node(x);
            t->next = p->next;
            t->prev = p;

            if (p->next != nullptr) {  // If p is not the last node
                p->next->prev = t;
            }
            p->next = t;
        }
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

int Delete(Node* p, int index){
    Node* q;
    int x = -1;

    if( index < 1 || index > Length(p)){
        return -1;
    }

    if(index == 1){
        first = first-> next;
        if(first){
            first-> prev = NULL;
        }
        x = p-> data;
        free(p);
    }

    else{
        for(int i = 0; i < index - 1; i++){
            p = p-> next;
        }
         p-> next-> prev = p-> next;
            if(p-> next){
                p-> next -> prev = p-> prev;
            }
        x = p-> data;
        free(p);
    }
    return x;
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

    Insert(first, 3, 9);
    Delete(first, 1);


    cout << "Length: " << Length(first) << endl;
    cout << "List: ";
    Display(first);

    return 0;
}
