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

int height(Node* root) {
    if(root != NULL) {
        int lh = height(root -> lChild);
        int rh = height(root -> rChild);
        return max(lh, rh) + 1;
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
    D -> rChild = E;

    cout << "Height of the tree: " << height(A);

}