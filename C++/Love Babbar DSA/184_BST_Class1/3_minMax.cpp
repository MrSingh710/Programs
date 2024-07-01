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

Node* constructionFromSequence( vector<int>& sequence) {
    Node* root = nullptr;

    for (int i = 0; i < sequence.size(); i++) {
        root = insertIntoBST(root, sequence[i]);
    }

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

// Minimum element by iteration
int min(Node* root) {
    Node* temp = root;
    if(temp == NULL) {
        return -1;
    }
    while(temp -> left != NULL) {
        temp = temp -> left;
    }
    return temp -> data;

}

// Maximum element by recursion
int max(Node* root) {
    if(root == NULL) {
        return -1;
    }
    if(root -> right == NULL) {
        return root -> data;
    }
    return max(root -> right);

}

int main() {

    vector<int> sequence = {10, 20, 5, 11, 17, 2, 4, 8, 6, 25, 15};
    Node* root = constructionFromSequence(sequence);

    cout << "Inorder traversal:- " << endl;
    inorderRecursive(root);

    cout << "\nMinimum element: " << min(root) << endl;
    cout << "Maximum element: " << max(root);

}