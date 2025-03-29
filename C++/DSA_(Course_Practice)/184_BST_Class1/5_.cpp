#include <iostream>
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

int balanceFactor(Node* root) {
    if(root == NULL) {
        return;
    }
    int leftHeight = balanceFactor(root -> left);
    int rightHeight = balanceFactor(root -> right);
    
    int BF = abs(leftHeight - rightHeight);
    
    
}

Node* insertAVL(Node* root, int key) {
    if(root == NULL) {
        return;
    }
    

}

int main() {

}