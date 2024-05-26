#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
       //destructor
    ~node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};
// inserting a new node in the beginning
void InsertAtHead(node* &head, int val){
    node* n = new node(val);
    n -> next =head;
    head = n;
}
// inserting a new node at tail

void InsertAtTail(node* &head, int val){
   node* n = new node(val);
    if (head == NULL) {
        head = n;
        return;
    }
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}
void insertAtPosition(node* & head, int position, int d){
    if(position == 1){
        InsertAtHead(head,d);
        return;
    }
    
    node* temp = head;
    int cnt = 1;
    while(cnt< position -1){
        temp = temp->next;
        cnt++;
    }
    // inserting at last position
    if(temp->next == NULL){
        InsertAtTail(head,d);
        return;
    }

    node* nodeToInsert = new node(d);
    nodeToInsert -> next = temp ->next;
    temp ->next = nodeToInsert;
}
void deleteNode(int position, node* head){

    if(position == 1){
        node* temp = head;
        head = head -> next;
        temp->next = NULL;
        delete temp;
    }
    else{

        node*current = head;
        node*prev = NULL;

        int cnt = 1;
        while(cnt<position){
            prev = current;
            current = current->next;
            cnt++;
        }
        prev ->next = current ->next;
        current->next = NULL;
        delete current;
    }
}


void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp-> data<< "->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head = NULL;
    InsertAtHead(head, 1);
    InsertAtHead(head, 2);
    InsertAtHead(head, 3);
    InsertAtTail(head, 4);
    display(head);
    insertAtPosition(head,5,31);
    display(head);
    deleteNode(4, head);
    display(head);
    return 0;
}
