#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};

// Function to calculate the height of a tree
int height(Node* root) {
    if (root == nullptr)
        return 0;
    return 1 + max(height(root->left), height(root->right));
}

// Function to check if a BST is an AVL tree
bool isAVL(Node* root) {
    if (root == nullptr)
        return true;

    // Check height difference for current node
    int left_height = height(root->left);
    int right_height = height(root->right);
    if (abs(left_height - right_height) > 1)
        return false;

    // Check if left and right subtrees are AVL trees
    return isAVL(root->left) && isAVL(root->right);
}

int main() {
    Node* root = new Node(9);
    root->left = new Node(4);
    root->right = new Node(14);
    root->left->left = new Node(2);
    root->left->right = new Node(6);

    if (isAVL(root))
        cout << "The given BST is an AVL tree";
    else
        cout << "The given BST is not an AVL tree";

    return 0;
}
