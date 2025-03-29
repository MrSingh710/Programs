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

bool search(Node* root, int target) {
    if(root == NULL) {
        return false;
    }

    if(root -> data == target) {
        return true;
    }
    else if(root -> data > target) {
        return search(root -> left, target);
    }
    else {
        return search(root -> right, target);
    }
}

int main() {
    vector<int> sequence = {10, 20, 5, 11, 17, 2, 4, 8, 6, 25, 15};
    Node* root = constructionFromSequence(sequence);

    cout << "Present or not: " << search(root, 5);
}