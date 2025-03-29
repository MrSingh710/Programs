#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    int height; // Height of the subtree rooted at this node
    Node* left;
    Node* right;
    Node(int data) {
        this -> data = data;
        height = 1;
        left = NULL;
        right = NULL;
    }
};

// Function to get the height of a node
int getHeight(Node* node) {
    if (node == nullptr)
        return 0;
    return node->height;
}

// Function to update the height of a node based on its children's heights
void updateHeight(Node* node) {
    node->height = 1 + max(getHeight(node->left), getHeight(node->right));
}

// Function to perform a right rotation
Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    updateHeight(y);
    updateHeight(x);

    return x;
}

// Function to perform a left rotation
Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    // Update heights
    updateHeight(x);
    updateHeight(y);

    return y;
}

// Function to insert a node into an AVL tree
Node* insert(Node* root, int data) {
    // Perform standard BST insertion
    if (root == nullptr)
        return new Node(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);
    else // Duplicate values are not allowed
        return root;

    // Update the height of the current node
    updateHeight(root);

    // Check the balance factor and perform rotations if necessary
    int balance = getHeight(root->left) - getHeight(root->right);
    // Left heavy
    if (balance > 1) {
        // Left-Left case
        if (data < root->left->data)
            return rightRotate(root);
        // Left-Right case
        else {
            root->left = leftRotate(root->left);
            return rightRotate(root);
        }
    }
    // Right heavy
    else if (balance < -1) {
        // Right-Right case
        if (data > root->right->data)
            return leftRotate(root);
        // Right-Left case
        else {
            root->right = rightRotate(root->right);
            return leftRotate(root);
        }
    }

    return root;
}

// Function to print the inorder traversal of the tree
void inorder(Node* root) {
    if (root == nullptr)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = nullptr;

    root = insert(root, 7);
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 4);
    root = insert(root, 3);
    root = insert(root, 12);

    cout << "Inorder traversal of the AVL tree: ";
    inorder(root);
    cout << endl;

    return 0;
}
