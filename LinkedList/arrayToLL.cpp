#include<iostream>
using namespace std;

class Node{
 public:
    int data;
    Node * next;
// constructor
    Node(int data) : data(data) , next(nullptr){}
};

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

void display(Node* head){
    while(head != NULL){
        cout << head->data << " -> ";
        head = head->next;
    }
cout << "nullptr" << endl; 
};

int main(){
    int arr[6] = {1,4,3,5,6,7};
    int size = 6;
    Node* head = arrayToLinkedList(arr, 6);

    std::cout << "Linked list: ";
    display(head);

    return 0;
}


