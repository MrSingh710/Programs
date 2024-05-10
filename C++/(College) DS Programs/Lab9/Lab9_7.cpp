#include <iostream>
#include <vector>
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

void printPaths(TreeNode* root, vector<int>& path) {
    if (root == NULL) {
        return;
    }

    path.push_back(root->val);

    if (root->left == NULL && root->right == NULL) {
        for (int i = 0; i < path.size(); i++) {
            cout << path[i] << " ";
        }
        cout << endl;
    } else {
        printPaths(root->left, path);
        printPaths(root->right, path);
    }

    path.pop_back();
}

void printAllPaths(TreeNode* root) {
    vector<int> path;
    printPaths(root, path);
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    printAllPaths(root);

    return 0;
}