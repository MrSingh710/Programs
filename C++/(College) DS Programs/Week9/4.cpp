#include <iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* lChild;
    Node* rChild;
    Node(int data){
        this -> data = data;
        lChild = NULL;
        rChild = NULL;
    }
};

int height(Node* root) {
    if (root == NULL)
        return 0;
    
    int lChildHeight = height(root -> lChild);
    int rChildHeight = height(root -> rChild);
    
    return 1 + max(lChildHeight, rChildHeight);
}

bool isBalanced(Node* root) {
    if (root == NULL) {
        return true;
    }
        
    int lChildHeight = height(root->lChild);
    int rChildHeight = height(root->rChild);
    
    if (abs(lChildHeight - rChildHeight) <= 1 && isBalanced(root->lChild) && isBalanced(root->rChild)) {
        return true;
    }
    else
    
    return false;
}

int main() {

    Node* A = new Node(10);
    Node* B = new Node(20);
    Node* C = new Node(30);
    Node* D = new Node(40);
    Node* E = new Node(50);
    Node* F = new Node(60);
    Node* G = new Node(70);
    A -> lChild = B;
    A -> rChild = C;
    B -> lChild = D;
    D -> lChild = E;
    // E -> lChild = F;
    // F -> lChild = G;

    if(isBalanced(A)) {
        cout << "Binary tree is balanced";
    }
    else {
        cout << "Binary tree is not balanced";
    }
    
}