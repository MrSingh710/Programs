#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) : data(data), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int data) {
    if (root == nullptr) {
        return new Node(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }

    return root;
}

void preorder(Node* root) {
    if (root == nullptr) {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    if (root == nullptr) {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// Function to construct the BST from a given sequence of positive integers
Node* construct( vector<int>& sequence) {
    Node* root = nullptr;

    for (int i = 0; i < sequence.size(); i++) {
        root = insert(root, sequence[i]);
    }

    return root;
}

int main() {
    vector<int> sequence = {3, 12, 200, 3, 710, 5, 4, 200, 4};

    Node* root = construct(sequence);

    // Print the preorder traversal
    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;

    // Print the postorder traversal
    cout << "Postorder traversal: ";
    postorder(root);
    cout << endl;

    return 0;
}