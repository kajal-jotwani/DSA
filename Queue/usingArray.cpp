#include<iostream>
using namespace std;

class Queue{
    int *arr;
    int front, rear;
    int size;

public:
    Queue(int n)
    {
        arr = new int[n];
        size = n;
        front = rear = -1;
    }

    bool IsEmpty()
    {
        return front == -1;
    }

    bool IsFull()
    {
        return rear == size - 1;
    }

    void Push(int x)
    {
        if(IsFull())
        {
            cout << "Queue overflow" << endl;
            return;
        }
        else if(IsEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear += 1;
        }
        arr[rear] = x;
    }

    void Pop()
    {
        if(IsEmpty())
        {
            cout << "Queue Underflow" << endl;
            return;
        }
        else
        {
            cout << "Popped: " << arr[front] << endl;
            if(front == rear)
            {
                front = rear = -1; // Reset the queue when the last element is removed
            }
            else
            {
                front += 1;
            }
        }
    }

    int Front()
    {
        if(IsEmpty())
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
};

int main()
{
    Queue Q(5);
    
    Q.Push(6);
    Q.Push(7);
    Q.Push(8);

    cout << "Front element: " << Q.Front() << endl; // Should display 6
    
    Q.Pop();
    cout << "Front element after pop: " << Q.Front() << endl; // Should display 7

    Q.Pop();
    Q.Pop();

    Q.Pop(); // Should display Queue Underflow as the queue is now empty
    return 0;
}
