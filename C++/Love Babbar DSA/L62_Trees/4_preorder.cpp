#include <iostream>
#include <stack>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* buildTree(Node* root) {
    cout << "Enter the data: ";
    int data;
    cin >> data;
    root = new Node(data);

    if(data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root -> left = buildTree(root -> left);
    cout << "Enter data for inserting in right of " << data << endl;
    root -> right = buildTree(root -> right);
    return root;
    
}

void preorderRecursive(Node* root) {
    // Base case
    if(root == NULL) {
        return;
    }

    cout << root -> data << "   ";
    preorderRecursive(root -> left);
    preorderRecursive(root -> right);

}

void preorderIterative(Node* root) {
    stack<Node*> s;
    s.push(root);
    cout << s.top() -> data;

    while (!s.empty()) {
        if(root -> left || root -> right) {
            s.push(root -> right);
            s.push(root -> left);
            cout << s.top() -> data;
        }
        else {
            s.pop();
        }
        root = s.top();

    }

    
}

int main() {

    Node* root = NULL;
    // Creation of tree
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    root = buildTree(root);

    cout << "Printing preorderRecursive traversal:-" << endl;
    preorderRecursive(root);

}
