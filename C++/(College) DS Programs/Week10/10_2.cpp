#include<bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) : data(data), left(nullptr), right(nullptr) {}
};

bool isBST(Node* root, int min = INT_MIN, int max = INT_MAX) {
    if (root == nullptr) {
        return true;
    }

    if (root->data < min || root->data > max) {
        return false;
    }

    return isBST(root->left, min, root->data - 1) && isBST(root->right, root->data + 1, max);
}
int main() {
    Node* root = new Node(15);
    root->left = new Node(13);
    root->right = new Node(17);
    root->left->left = new Node(12);
    root->left->right = new Node(14);
    root->right->left = new Node(16);
    root->right->right = new Node(18);

    if (isBST(root)) {
        cout << "The tree is a binary search tree" << endl;
    } else {
        cout << "The tree is not a binary search tree" << endl;
    }

    return 0;
}