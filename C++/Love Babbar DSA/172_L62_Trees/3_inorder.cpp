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

void inorderRecursive(Node* root) {
    // Base case
    if(root == NULL) {
        return;
    }

    inorderRecursive(root -> left);
    cout << root -> data << "   ";
    inorderRecursive(root -> right);

}

void inorderIterative(Node* root) {
    if(root == NULL) {
        return;
    }

    stack<Node*> s;
    s.push(root);
    Node* top = s.top();

    while (!s.empty()) { 
        // For traversing through left links till NULL is reached
        while(top -> left) {
            s.push(top -> left);
            top = s.top();
        } 

        Node* temp = s.top();
        cout << s.top() -> data << "   ";
        s.pop();
        // If right link is there, then push it
        if(temp -> right) {
            s.push(temp -> right);
            // To check that the right link have any left link or not
            top = s.top();
        }
               
    }
}


int main() {

    Node* root = NULL;
    // Creation of tree
    // 1 3 7 -1 -1 11 -1 -1 5 -1 17 -1 -1 -1 
    root = buildTree(root);

    cout << "Printing inorderRecursive traversal:-" << endl;
    inorderRecursive(root);

    cout << "\nPrinting iterative preorder traversal:-" << endl;
    inorderIterative(root);

}
