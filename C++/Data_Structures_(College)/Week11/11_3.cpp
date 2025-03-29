#include <iostream>
using namespace std;
#include <algorithm>

// Definition for a binary tree node.
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

// Function to get the successor of a node (the smallest node in its right subtree)
Node* getSuccessor(Node* root) {
    Node* current = root;
    while (current->left != nullptr)
        current = current->left;
    return current;
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

// Function to delete a node from an AVL tree
Node* deleteNode(Node* root, int key) {
    // Perform standard BST deletion
    if (root == nullptr)
        return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        // Node with only one child or no child
        if (root->left == nullptr || root->right == nullptr) {
            Node* temp = root->left ? root->left : root->right;

            // No child case
            if (temp == nullptr) {
                temp = root;
                root = nullptr;
            } else // One child case
                *root = *temp; // Copy the contents of the non-empty child

            delete temp;
        } else {
            // Node with two children: Get the inorder successor (smallest in the right subtree)
            Node* successor = getSuccessor(root->right);

            // Copy the inorder successor's data to this node
            root->data = successor->data;

            // Delete the inorder successor
            root->right = deleteNode(root->right, successor->data);
        }
    }

    // If the tree had only one node then return
    if (root == nullptr)
        return root;

    // Update the height of the current node
    updateHeight(root);

    // Check the balance factor and perform rotations if necessary
    int balance = getHeight(root->left) - getHeight(root->right);
    // Left heavy
    if (balance > 1) {
        // Left-Left case
        if (getHeight(root->left->left) >= getHeight(root->left->right))
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
        if (getHeight(root->right->right) >= getHeight(root->right->left))
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

    root = insert(root, 9);
    root = insert(root, 5);
    root = insert(root, 10);
    root = insert(root, 0);
    root = insert(root, 6);
    root = insert(root, 11);
    root = insert(root, -1);
    root = insert(root, 1);
    root = insert(root, 2);

    cout << "Inorder traversal of the AVL tree: ";
    inorder(root);
    cout << endl;

    root = deleteNode(root, 10);

    cout << "Inorder traversal of the AVL tree after deletion: ";
    inorder(root);

    return 0;
}
