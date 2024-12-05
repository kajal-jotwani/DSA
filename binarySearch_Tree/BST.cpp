#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left, *right;

    Node(int value){
        data = value;
        left = right = NULL;
    }
};

Node* insert(Node* root, int target){
    if(!root){
        Node* temp = new Node(target);
        return temp;
    }
    if(root -> data > target){
        root -> left = insert(root -> left, target);
    }
    else{
        root -> right = insert(root -> right, target);
    }
    return root;
}

void inorder(Node*root){
    if(!root) return;

    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
}

bool Search(Node*root, int target){
    if(!root) return 0;

    if(root -> data == target)
        return 1;

    if(root -> data < target)
        return Search(root -> right , target);
    else
        return Search(root -> left, target);

}

int main(){
    int arr[10] = {6, 9, 17, 84, 4,28, 2, 5, 7, 13};
    Node* root = NULL;

    for(int i = 0; i < 10; i++){
        root = insert(root, arr[i]);
    }
    cout << Search(root, 28) << endl;
}