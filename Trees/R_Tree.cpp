#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *left, *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

Node *BinaryTree()
{
    int x;
    cin >> x;
    if(x == -1)
        return NULL;

    Node *temp = new Node(x);
    cout << "Enter the left child of " << x << endl;
    temp -> left = BinaryTree();
    cout << "Enter the right child of " << x << endl;
    temp -> right = BinaryTree();

    return temp;
}

int main()
{
    cout << "Enter the root node : ";
    Node *root;
    root = BinaryTree();
}