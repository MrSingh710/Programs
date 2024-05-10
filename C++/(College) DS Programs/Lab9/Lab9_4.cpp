// #include <iostream>
// #include<queue>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;

//     node(int d)
//     {
//         this->data = d;
//         this->left = NULL;
//         this->right = NULL;
//     }

// };

// node* buildTree(node *root)
//     {
//         cout << "Enter the data : ";
//         int data;
//         cin >> data;
//         root = new node(data);
//         if (data == -1)
//             return NULL;
//         cout << "Enter the data for inserting in left of " << data << endl;
//         root->left = buildTree(root->left);
//         cout << "Enter the data for inserting in right of " << data << endl;
//         root->right = buildTree(root->right);

//         return root;
// }

 
// void postOrderTraversal(node* root){
//     if(root==NULL ) return;
//     postOrderTraversal(root->left);
//     postOrderTraversal(root->right);
//     cout<<root->data<<" ";

// }

// int height(node* root){
//       if(root==NULL) return 0;
//       return 1+max(height(root->left),height(root->right));
// }
// bool isBalanced(node* root) {
//         if(root==NULL) return true;
//         return abs(height(root->left)-height(root->right))<=1 && isBalanced(root->left) && isBalanced(root->right);
// }
// int main()
// {
//     node *root = NULL;
//     root = buildTree(root);
//     //data string 1 2 3 4 -1 -1 9 -1 -1 5 11 -1 -1 8 -1 -1 3 -1 11 -1 4 -1 -1
//     cout<<"Printing the in order traversal output  : "<<endl;
//     postOrderTraversal(root);
//     cout<<endl;
//     cout<<"Is the tree balanced : "<<isBalanced(root)<<endl;

//     return 0;
// }

#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node * left, *right;
    node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

int height(node* root) {
    if (root == NULL)
        return 0;
    
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    
    return 1 + max(leftHeight, rightHeight);
}

bool isBalanced(node* root) {
    if (root == NULL)
        return true;
    
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    
    if (abs(leftHeight - rightHeight) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        return true;
    
    return false;
}

int main(){
    node* A = new node(10);
    node* B = new node(20);
    node* C = new node(30);
    node* D = new node(40);
    node* E = new node(50);
    node* F = new node(60);
    node* G = new node(70);
    A -> left = B;
    //A -> right = C;
    B -> left = D;
    D -> left = E;
    E -> left = F;
    // F -> left = G;

    if(isBalanced) {
        cout << "Binary tree is balanced";
    }
    else {
        cout << "Binary tree is not balanced";
    }
}