#include<iostream>
using namespace std;

class Node{
 public:
    int data;
    Node * next;
// constructor
    Node(int data) : data(data) , next(nullptr){}
}* first = nullptr;


Node * arrayToLinkedList(int arr[], int size){
    if(size == 0) return nullptr;

//creating initial head node
Node* head = new Node(arr[0]);
Node* current = head;

for(int i = 1; i < size; i++){
    current->next = new Node(arr[i]);
    current = current->next;

}
return head;
}

// searching in a LL

Node* linearSearch(Node* head, int key){
    while(head != NULL){
        if(key == head-> data){
            return head;
        }
        else{
            head = head-> next;
        }    
    }
return NULL;
}

// recurssive function 
 Node * Rsearch(Node* head, int key){
    if(head == NULL){
        return NULL;
    }
    if(key == head-> data){
        return head;
    }
    return Rsearch(head-> next, key);
 }

// Move to front linear search
Node* LSearch(Node*& head, int key) {
    Node* q = nullptr;
    Node* p = head;

    while (p != nullptr) {
        if (key == p->data) {
            if (q != nullptr) {
                q->next = p->next;
                p->next = head;
                head = p;
            }
            // Update the global first pointer
            first = head;
            return p;
        }
        q = p;
        p = p->next;
    }
    return nullptr;
}


void display(Node* head){
    while(head != NULL){
        cout << head->data << " -> ";
        head = head->next;
    }
cout << "nullptr" << endl; 
};

int main(){
    int arr[6] = {9,4,6,2,7,10};
    int size = 6;
    Node* head = arrayToLinkedList(arr, 6);

    std::cout << "Linked list: ";
    display(head);

    Node* temp;
    // temp = linearSearch(head, 0);
    // temp = Rsearch(head, 7);
    temp = LSearch(head, 7);
    
    
    if(temp){
        cout<<"Key is found"<<temp-> data;
    }
    else{
        cout<<"Key is not found";
    }
    cout<<endl;
display(head);
    return 0;
}


