#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* lChild;
    Node* rChild;

    Node(int data) {
        this -> data = data;
        this -> lChild = NULL;
        this -> rChild = NULL;
    }

};

void printPaths(Node* root, vector<int>& path) {
    if (root == NULL) {
        return;
    }

    path.push_back(root -> data);

    if (root -> lChild == NULL && root -> rChild == NULL) {
        for (int i = 0; i < path.size(); i++) {
            cout << path[i] << " ";
        }
        cout << endl;
    } else {
        printPaths(root -> lChild, path);
        printPaths(root -> rChild, path);
    }

    path.pop_back();
}

void printAllPaths(Node* root) {
    vector<int> path;
    printPaths(root, path);
}

int main() {
    Node* root = new Node(1);
    root -> lChild = new Node(2);
    root -> rChild = new Node(3);
    root -> lChild -> lChild = new Node(4);
    root -> lChild -> rChild = new Node(5);

    printAllPaths(root);

    return 0;
}