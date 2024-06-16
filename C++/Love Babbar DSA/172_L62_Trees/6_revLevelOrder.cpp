#include <iostream>
#include <queue>
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

// Printing the tree in levels from bottom to top
void reverseLevelOrderTraversal(Node* root) {
    queue<Node*> q;
    deque<Node*> final;
    q.push(root);
    q.push(NULL);       // For seperating the levels
    final.push_back(root);
    final.push_back(NULL);
    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) {
            if(!q.empty()) {
                q.push(NULL);
                final.push_back(NULL);
            }
        }
        else {
            if(temp -> left) {
                q.push(temp -> left);
                final.push_back(temp -> left);
            }
            if(temp -> right) {
                q.push(temp -> right);
                final.push_back(temp -> right);
            }
        }
    }

    while(!final.empty()) {
        Node* temp1 = final.back();
        if(temp1 == NULL) {
            cout << endl;
            final.pop_back();
            temp1 = final.back();
        }
        cout << temp1 -> data << "   ";
        final.pop_back();
    }

}

int main() {
    Node* root = NULL;

    // Creation of tree
    // 1 3 7 -1 -1 11 -1 -1 5 -1 17 -1 -1 
    root = buildTree(root);

    // Level order traversal
    cout << "Printing reverse level order traversal:- " << endl;
    reverseLevelOrderTraversal(root);

}