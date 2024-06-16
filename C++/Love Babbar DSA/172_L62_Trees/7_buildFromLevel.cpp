#include <iostream>
#include <queue>
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

// Building tree from level order traversal
Node* buildFromLevelOrder(Node* root) {
    int data;
    cout << "Enter the data for root: ";
    cin >> data;
    root = new Node(data);

    queue<Node*> q;
    q.push(root);
    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();
        int leftData = 0;
        int rightData = 0;
        
        cout << "\nEnter the data for left node of " << temp -> data << ": ";
        cin >> leftData;
        if(leftData != -1) {
            temp -> left = new Node(leftData);
            q.push(temp -> left);
        }

        cout << "\nEnter the data for right node of " << temp -> data << ": ";
        cin >> rightData;
        if(rightData != -1) {
            temp -> right = new Node(rightData);
            q.push(temp -> right);
        }
        
    }
    return root;

} 


// Printing the tree in levels from top to bottom
void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);       // For seperating the levels

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) {
            cout << endl;
            if(!q.empty()) {
                q.push(NULL);
            }
        }
        else {
            cout << temp -> data << "  ";
            if(temp -> left) {
                q.push(temp -> left);
            }
            if(temp -> right) {
                q.push(temp -> right);
            }
        }
    }
}


int main() {
    Node* root = NULL;

    // Creation of tree
    // 1 3 7 -1 -1 11 -1 -1 5 -1 17 -1 -1
    root = buildFromLevelOrder(root);

    // Level order traversal
    cout << "\nPrinting level order traversal:- " << endl;
    levelOrderTraversal(root);

}