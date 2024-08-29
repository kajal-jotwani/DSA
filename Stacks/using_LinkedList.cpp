#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    // constructor
    Node(int value)
    {
    data = value;
    next = NULL;
    }

};

class Stack
{
    Node *top;
    int size;

    public:
    // constructor
    Stack()
    {
        top = NULL;
        size = 0;
    }

    // push
    void push(int value)
    {
        Node* temp = new Node(value);
        if(temp == NULL)
        {
            cout << "stack overflow";
            return;
        }
        else
        {
        temp -> next = top;
        top = temp;
        size++;
         cout << "Pushed " << value << " onto the stack" << endl;
        }
    }
    // pop
    void pop()
    {
        if(top == NULL)
        {
            cout << "Stack underflow";
            return;
        }
        else
        {
            Node *temp = top;
            cout << "popped " << top -> data << endl;
            top = top -> next;
            delete(temp);
            size--;
        }
    }
    // peek
    int peek()
    {
        if(top == NULL)
        {
            cout << " Stack is empty";
            return -1;
        }
        else
        {
            return top -> data;
        }
    }
    // isEmpty
    bool isEmpty()
    {
        return top == NULL;
    }
    // isSize
    int isSize()
    {
       return size; 
    }
};

int main() 
{
    Stack S;
    S.push(6);
    S.push(7);
    S.push(9);
    S.push(3);
    S.push(1);
    cout << "Top element is: " << S.peek() << endl; 
    cout << "Stack size is: " << S.isSize() << endl;
    return 0;
}