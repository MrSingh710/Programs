#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) : data(data), left(nullptr), right(nullptr) {}
};

Node* trimBST(Node* root, int L, int R) {
    if (root == nullptr) {
        return root;
    }

    if (root->data < L) {
        return trimBST(root->right, L, R);
    }

    if (root->data > R) {
        return trimBST(root->left, L, R);
    }

    root->left = trimBST(root->left, L, R);
    root->right = trimBST(root->right, L, R);

    return root;
}

void printBST(Node* root) {
    if (root == nullptr) {
        return;
    }

    printBST(root->left);
   cout << root->data << " ";
    printBST(root->right);
}

int main() {
    Node* root = new Node(7);
    root->left = new Node(10);
    root->right = new Node(5);
    root->left->left = new Node(3);
    root->left->right = new Node(12);
    root->right->left = new Node(4);
    root->right->right = new Node(34);

   cout << "Before trimming: ";
   printBST(root);
   cout <<endl;

   root = trimBST(root, 5, 15);

   cout << "After trimming: ";
   printBST(root);
   cout <<endl;

    return 0;
}