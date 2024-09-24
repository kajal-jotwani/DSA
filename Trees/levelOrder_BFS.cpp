#include <iostream>
#include <queue>
using namespace std;

// Structure of a Node in the binary tree
struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Function to calculate the height of the binary tree
int height(Node* root) {
    if (root == NULL) {
        return 0;  // If the tree is empty, the height is 0
    }
    
    // Initialize a queue for level-order traversal
    queue<Node*> q;
    q.push(root);
    
    int h = 0;  // Initialize the height
    
    // Process the tree level by level
    while (!q.empty()) {
        int size = q.size();  // Number of nodes at the current level
        h++;  // Each iteration represents one level, so we increment the height
        
        // Process all nodes at the current level
        while (size--) {
            Node* curr = q.front();
            q.pop();
            
            // Add the left child to the queue if it exists
            if (curr->left) {
                q.push(curr->left);
            }
            
            // Add the right child to the queue if it exists
            if (curr->right) {
                q.push(curr->right);
            }
        }
    }
    
    return h;  // Return the total height of the tree
}

// Driver code to test the height function
int main() {
    // Example tree:
    //         1
    //        / \
    //       2   3
    //      / \
    //     4   5
    
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    
    cout << "Height of the tree is: " << height(root) << endl;  // Output: 3
    
    return 0;
}
