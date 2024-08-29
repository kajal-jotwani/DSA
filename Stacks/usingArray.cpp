#include<iostream>
using namespace std;

class Stack{
    int *arr;
    int size;
    int top;

    public:

    bool flag;
    // constructor
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
        // if stack is empty flag is assigned 1
        flag = 1;
    }


// push
void push(int value)
{
    if(top == size - 1)
    {
        cout << "stack overflow";
        return;
    }
    else
    {
        top++;
        arr[top] = value;
        cout << "pushed " << value <<" in stack" << endl;
        // stack is not empty
        flag = 0;
    }
}

// pop
void pop()
{
    if(top == -1)
    {
        cout << "stack underflow";
    }
    else
    {
        top--;
        cout << "Popped " << arr[top+1] << " from stack" << endl;
        if(top == -1){
            // stack is empty
            flag = 1;
        }
    }
}

// peek
int peek()
{
    if(top == -1)
    {
        cout << "stack is empty";
        return -1;
    }
    else{
        return arr[top];
    }
}

// is empty
bool isEmpty()
{
    return top == -1;  
}

// is size
int isSize()
{
    return top + 1;
}

};

int main() 
{
    Stack S(5);
    // S.push(7);
    // S.push(3);
    // S.push(9);
    // S.pop();
    // cout << S.peek() << endl;
    // cout << S.isEmpty() << endl;
    // cout << S.isSize() << endl;
    
    // S.push(-1);
    int value = S.peek();
    if(S.flag == 0){
        cout << value << endl;
    }
    
}