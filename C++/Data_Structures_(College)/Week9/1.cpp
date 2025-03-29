#include <iostream>
using namespace std;

class Node {

    public:
    int value;
    Node* lChild;
    Node* rChild;
    
    Node() {
        value = 0;
        lChild = NULL;
        rChild = NULL;
    }

    Node(int value) {
        this -> value = value;
        lChild = NULL;
        rChild = NULL;
    }

};


void preOrder(Node* root) {
    if(root != NULL) {
        cout << root -> value << "   ";
        preOrder(root -> lChild);
        preOrder(root -> rChild);
    } 

}

void inOrder(Node* root) {
    if(root != NULL) {
        inOrder(root -> lChild);
        cout << root -> value << "   ";
        inOrder(root -> rChild);
    } 

}

void postOrder(Node* root) {
    if(root != NULL) {
        postOrder(root -> lChild);
        postOrder(root -> rChild);
        cout << root -> value << "   ";
    } 

}


int main()  {

    Node* A = new Node(10);
    Node* B = new Node(20);
    Node* C = new Node(30);
    Node* D = new Node(40);
    Node* E = new Node(50);
    A -> lChild = B;
    A -> rChild = C;
    B -> lChild = D;
    C -> rChild = E;

    cout << "Pre-Order traversal: ";
    preOrder(A);

    cout << "\nIn-Order traversal: ";
    inOrder(A);

    cout << "\nPost-Order traversal: ";
    postOrder(A);

}