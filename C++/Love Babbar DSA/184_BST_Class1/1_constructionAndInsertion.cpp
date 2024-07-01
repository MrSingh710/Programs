#include <iostream>
#include <queue>
using namespace std;

class Node{
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

Node* insertIntoBST(Node* root, int data) {
    // Base Case
    if(root == NULL) {
        root = new Node(data);
        return root;
    }

    if(data < root -> data) {
        root -> left = insertIntoBST(root -> left, data); 
    }
    else {
        root -> right = insertIntoBST(root -> right, data);
    }
     
    //return root;

}

Node* constructByTakingInputs(Node* root) {
    int data;
    cin >> data;
    cout << "Enter the data: ";
    while(data != -1) {
        root = insertIntoBST(root, data);
        cin >> data;
    }
    return root;
}

// // Function to construct the BST from a given sequence of positive integers
// Node* constructionFromSequence( vector<int>& sequence) {
//     Node* root = nullptr;

//     for (int i = 0; i < sequence.size(); i++) {
//         root = insertIntoBST(root, sequence[i]);
//     }

//     return root;
// }

void inorderRecursive(Node* root) {
    // Base case
    if(root == NULL) {
        return;
    }

    inorderRecursive(root -> left);
    cout << root -> data << "   ";
    inorderRecursive(root -> right);

}

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);       // For seperating the levels

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) {
            cout << endl;
            if(!q.empty()) {
                q.push(NULL);
            }
        }
        else {
            cout << temp -> data << "  ";
            if(temp -> left) {
                q.push(temp -> left);
            }
            if(temp -> right) {
                q.push(temp -> right);
            }
        }
    }
}


int main() {
    Node* root = NULL;

    vector<int> sequence = {10, 20, 5, 11, 17, 2, 4, 8, 6, 25, 15};

    // 10 20 5 11 17 2 4 8 6 25 15 -1
    root = constructByTakingInputs(root);

    // Node* root = constructionFromSequence(sequence);
    cout << "Level Order Traversal:- " << endl;
    levelOrderTraversal(root);

    // Inorder will always be sorted
    cout << "Inorder Traversal: ";
    inorderRecursive(root);
    
}