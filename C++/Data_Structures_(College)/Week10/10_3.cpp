#include<bits/stdc++.h>
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
int minValue(Node* node) {
    int minv = node->data;

    while (node->left!= nullptr) {
        minv = node->left->data;
        node = node->left;
    }

    return minv;
}

Node* deleteNode(Node* root, int data) {
    if (root == nullptr) {
        return root;
    }

    if (data < root->data) {
        root->left = deleteNode(root->left, data);
    } else if (data > root->data) {
        root->right = deleteNode(root->right, data);
    } else {
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        root->data = minValue(root->right);

        root->right = deleteNode(root->right, root->data);
    }

    return root;
}



bool search(Node* root, int data) {
    if (root == nullptr) {
        return false;
    }

    if (data < root->data) {
        return search(root->left, data);
    } else if (data > root->data) {
        return search(root->right, data);
    } else {
        return true;
    }
}

void inorder(Node* root) {
    if (root == nullptr) {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

Node* inorderPredecessor(Node* root, int data) {
    Node* predecessor = nullptr;

    while (root!= nullptr) {
        if (data < root->data) {
            root = root->left;
        } else {
            predecessor = root;
            root = root->right;
        }
    }

    return predecessor;
}

Node* inorderSuccessor(Node* root, int data) {
    Node* successor = nullptr;

    while (root!= nullptr) {
        if (data > root->data) {
            root = root->right;
        } else {
            successor = root;
            root = root->left;
        }
    }

    return successor;
}


int countNodes(Node* root) {
    if (root == nullptr) {
        return 0;
    }

    return 1 + countNodes(root->left) + countNodes(root->right);
}
Node* kthSmallest(Node* root, int k) {
    int count = countNodes(root->left);

    if (count == k - 1) {
        return root;
    }

    if (count > k - 1) {
        return kthSmallest(root->left, k);
    }

    return kthSmallest(root->right, k - count - 1);
}


int countNodesInRange(Node* root, int L, int R) {
    if (root == nullptr) {
        return 0;
    }

    if (root->data < L) {
        return countNodesInRange(root->right, L, R);
    }

    if (root->data > R) {
        return countNodesInRange(root->left, L, R);
    }

    return 1 + countNodesInRange(root->left, L, R) +
           countNodesInRange(root->right, L, R);
}


int main() {
    Node* root = nullptr;
    root = insert(root, 10);
    root = insert(root, 30);
    root = insert(root, 50);
    root = insert(root, 70);
    root = insert(root, 90);
    root = insert(root, 110);
    root = insert(root, 130);

    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    int target = 50;
    if (search(root, target)) {
        cout << "Target value " << target << " found in the BST." << endl;
    } else {
        cout << "Target value " << target << " not found in the BST." << endl;
    }

    int value = 65;
    Node* predecessor = inorderPredecessor(root, value);
    Node* successor = inorderSuccessor(root, value);

    if (predecessor!= nullptr) {
        cout << "Inorder predecessor of " << value << " is " << predecessor->data << endl;
    } else {
        cout << "Inorder predecessor of " << value << " not found." << endl;
    }

    if (successor!= nullptr) {
        cout << "Inorder successor of " << value << " is " << successor->data << endl;
    } else {
        cout << "Inorder successor of " << value << " not found." << endl;
    }
    int k = 5;
    Node* kthSmallestNode = kthSmallest(root, k);

    if (kthSmallestNode!= nullptr) {
        cout << k << "th smallest element in the BST is " << kthSmallestNode->data << endl;
    } else {
        cout<< k  << "th smallest element not found in the BST." << endl;
    }

    int L = 23;
    int R = 87;
    int count = countNodesInRange(root, L, R);

    cout << "The # of nodes that lie in the range [" << L << ", " << R << "] is " << count << endl;

    return 0;
}