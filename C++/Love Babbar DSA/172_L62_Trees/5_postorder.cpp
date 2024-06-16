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

void postorderRecursive(Node* root) {
    // Base case
    if(root == NULL) {
        return;
    }

    postorderRecursive(root -> left);
    postorderRecursive(root -> right);
    cout << root -> data << "   ";

}

// Not completed yet
void postorderIterative(Node* root) {
    if(root == NULL) {
        return;
    }

    stack<Node*> s;
    s.push(root);
    Node* temp = s.top();
    Node* swtch = new Node(0);
    Node* r = NULL;
    
    while (!s.empty()) { 
        // For traversing through left links till NULL is reached
        while(temp -> left) {
            s.push(temp -> left);
            temp = s.top();
        } 
        

        temp = s.top();
        if(temp -> right == NULL || temp -> right == r) {  
            cout << s.top() -> data << "   ";
            s.pop();
            r = temp;
            temp -> left = NULL;       
        }
        

        // If right link is there, then push it 
        else { 
            s.push(temp -> right);
            temp = temp -> right;
        } 
    
    }
}


int main() {

    Node* root = NULL;
    // Creation of tree
    // 1 3 7 -1 -1 11 -1 -1 5 -1 17 -1 -1 
    root = buildTree(root);

    cout << "Printing postorderRecursive traversal:-" << endl;
    postorderRecursive(root);

    cout << "\nPrinting iterative postorder traversal:-" << endl;
    postorderIterative(root);

}
