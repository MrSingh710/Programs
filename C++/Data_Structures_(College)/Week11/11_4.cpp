#include <iostream>
using namespace std;
#include <vector>

// Definition for a binary tree node.
class Node {
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};

// Function to construct an AVL tree from a sorted array
Node* sortedArrayToBST(vector<int>& nums, int start, int end) {
    if (start > end)
        return nullptr;

    // Find the middle element of the array
    int mid = start + (end - start) / 2;

    // Create a new node with the middle element as the value
    Node* root = new Node(nums[mid]);

    // Recursively construct the left and right subtrees
    root->left = sortedArrayToBST(nums, start, mid - 1);
    root->right = sortedArrayToBST(nums, mid + 1, end);

    return root;
}

// Helper function to print the inorder traversal of the tree
void inorder(Node* root) {
    if (root == nullptr)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    vector<int> nums = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

    // Construct the AVL tree from the sorted array
    Node* root = sortedArrayToBST(nums, 0, nums.size() - 1);

    // Print the inorder traversal of the constructed AVL tree
    cout << "Inorder traversal of the constructed AVL tree: ";
    inorder(root);

    return 0;
}
