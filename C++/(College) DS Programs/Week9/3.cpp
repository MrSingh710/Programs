#include <iostream>
using namespace std;

class Node{
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

void leafNodes(Node* root, int &count){
    if(root == NULL) {
        return;
    } 

    if(root -> lChild == NULL and root -> rChild == NULL) {
        count++;
    }
    
    leafNodes(root -> lChild, count);
    leafNodes(root -> rChild, count);

}


int main(){

    Node* A = new Node(10);
    Node* B = new Node(20);
    Node* C = new Node(30);
    Node* D = new Node(40);
    Node* E = new Node(50);
    A -> lChild = B;
    A -> rChild = C;
    B -> lChild = D;
    D -> rChild = E;

    int count = 0;
    leafNodes(A, count);

    cout << "No. of leaf nodes: " << count;
    
}