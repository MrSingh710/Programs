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

void NumberOfLeaf(node* root,int &count){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL) count++;
     NumberOfLeaf(root->left,count);
     NumberOfLeaf(root->right,count);
}

int NumberOfNode(node* root){
    if(root==NULL) return 0;
    return 1+NumberOfNode(root->left)+NumberOfNode(root->right);
}


int main()
{
    node *root = NULL;
    root = buildTree(root);
    //data string 1 2 3 4 -1 -1 9 -1 -1 5 11 -1 -1 8 -1 -1 3 -1 11 -1 4 -1 -1
    cout<<"Printing the in order traversal output  : "<<endl;
    inOrderTraversal(root);
    cout<<endl;

    int count=0;
    NumberOfLeaf(root,count);
    cout<<"Number of Leaf Node is : "<<count<<endl;
    cout<<"Total Number of Node is : "<<NumberOfNode(root)<<endl;

    return 0;
}