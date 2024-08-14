#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    // constructor to create a new node
    Node( int data){
        this->data = data;  // Initialize the data
        this->next = nullptr;  // Initially, the next is set to nullptr
    }
};

Node* arrayToLinkedList(int arr[], int size){
    if(size == 0) return nullptr;

    // creating initial head node
    Node* head = new Node(arr[0]);
    Node* current = head;

    for( int i = 1; i< size; i++ ){
        current-> next = new Node(arr[i]);
        current = current-> next;
    }
return head;
}

// to count the number of nodes in a linked list 
int count(Node* head){
    int count = 0;
    while(head){
        count++ ;
        head = head-> next;
    }
    return count;
}

// recursive count function
int Rcount(Node* head){
    if(head != nullptr){
        return Rcount(head-> next) + 1;
    }
    else{
        return 0;
    } 
}


// display elements in a linked list(forwards) using recurssion
void display(Node* head){
    if( head != nullptr){
        cout << head-> data << endl;
        display(head-> next);
    }
}
// display elements in a linked list(backwards) using recurssion
void display_back(Node* head){
    if( head != nullptr){
        display(head-> next);
        cout << head-> data << endl;
        
    }
}

int main() 
{
    int arr[6] = {1,4,3,5,6,7};
    int size = 6;
    Node* head = arrayToLinkedList(arr, 6);

    std::cout << "Linked list: ";
    display(head);
    cout<<"display backwards"<<endl;
    display_back(head);

    cout<<"the length of ll is "<<count(head)<< endl;
    cout<<"the length of ll is "<<Rcount(head)<< endl;
    return 0;
}