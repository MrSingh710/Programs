#include <iostream>
#include <queue>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int d)
    {
        this->val = d;
        this->left = NULL;
        this->right = NULL;
    }

};

TreeNode* buildTree(vector<int> &arr,int n,int i) {
    if(n==0) return NULL;
    if(i>=n) return  NULL;
    TreeNode* root=new TreeNode(arr[i]);
    root->left=buildTree(arr,n,2*i+1);
    root->right=buildTree(arr,n,2*i+2);
    return root;

}

void printTree(TreeNode* root) {
    if (root == NULL) {
        return;
    }

    cout << root->val << " ";
    printTree(root->left);
    printTree(root->right);
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    TreeNode* root = buildTree(nums,7,0);
    printTree(root);
    cout << endl;

    return 0;
}