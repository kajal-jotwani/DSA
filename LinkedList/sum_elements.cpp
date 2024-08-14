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

// sum of all elements in a ll
int sum(Node* head){
    int sum = 0;

    while(head != 0){
        sum += head-> data;
        head = head->next;
    }
    return sum;
}
// sum of all elements in a ll recursively
int Rsum(Node* head){
    if( head != nullptr){
        return Rsum(head-> next) + head-> data;
    }
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
    cout<<endl;
    cout<<"sum of all elements of the LL are "<< sum(head);
    cout<<endl;
    cout<<"sum of all elements of the LL recursively are "<< Rsum(head);

    return 0;
}


