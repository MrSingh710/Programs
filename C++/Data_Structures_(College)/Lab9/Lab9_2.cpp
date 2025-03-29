#include <iostream>
#include<queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

node* buildTree(node *root)
    {
        cout << "Enter the data : ";
        int data;
        cin >> data;
        root = new node(data);
        if (data == -1)
            return NULL;
        cout << "Enter the data for inserting in left of " << data << endl;
        root->left = buildTree(root->left);
        cout << "Enter the data for inserting in right of " << data << endl;
        root->right = buildTree(root->right);

        return root;
}

 
void inOrderTraversal(node* root){
    if(root==NULL ) return;
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);

}

int height(node* root){
    if(root==NULL) return 0;
    return 1+max(height(root->left),height(root->right));
}
int main()
{
    node *root = NULL;

    // Creating a tree;
    root = buildTree(root);
    //data string 1 2 3 4 -1 -1 9 -1 -1 5 11 -1 -1 8 -1 -1 3 -1 11 -1 4 -1 -1
    cout<<"Printing the in order traversal output  : "<<endl;
    inOrderTraversal(root);
    cout<<endl;
    cout<<"Height of the tree is : "<<height(root)<<endl;
    return 0;
}