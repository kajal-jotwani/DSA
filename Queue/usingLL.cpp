#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

class Queue
{
    Node* front;
    Node* rear;

    public:

    Queue()
    {
        front = rear = NULL;
    }

    // queue is empty or not 
    bool IsEmpty()
    {
        return front == NULL;
    }

    // push elements into linked list
    void Push(int x)
    {
        if(IsEmpty()){
            cout << "pushed " << x << " into the queue" << endl;
            front = rear = new Node(x);
            return;
        }
        else{
            rear -> next = new Node(x);
            rear = rear -> next;
            cout << "pushed " << x << " into the queue" << endl;
        }
    }

    void Pop()
    {
        if(IsEmpty()){
            cout << "Queue underflow";
            return;
        }
        else{
            cout << "popped " << front -> data <<" from the queue";
            Node* temp = front;
            front = front -> next;
            delete temp;
        }
    }

    int Start()
    {
        if(IsEmpty()){
            cout << "Queue is empty";
            return -1;
        }
        else{
            return front -> data;
        }
    }
};

int main()
{
    Queue Q;
    Q.Push(8);
    Q.Push(5);
    Q.Push(3);
    Q.Push(6);
    Q.Push(1);
    Q.Pop();
    cout <<endl<< Q.Start();
}