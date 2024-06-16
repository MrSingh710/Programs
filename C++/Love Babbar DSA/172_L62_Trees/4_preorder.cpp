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
    if(root == NULL) {
        return;
    }

    stack<Node*> s;
    s.push(root);

    while (!s.empty()) {
        Node* temp = s.top();
        cout << temp -> data << "   ";
        s.pop();   
        if(temp -> right) {
            s.push(temp -> right);
        }
        if(temp -> left) {
            s.push(temp -> left);
        }
    }

}

int main() {

    Node* root = NULL;
    // Creation of tree
    // 1 3 7 -1 -1 11 -1 -1 5 -1 17 -1 -1 
    root = buildTree(root);

    cout << "Printing recursive preorder traversal:-" << endl;
    preorderRecursive(root);
    
    cout << "\nPrinting iterative preorder traversal:-" << endl;
    preorderIterative(root);

}
