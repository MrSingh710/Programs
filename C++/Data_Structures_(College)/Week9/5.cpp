#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* lChild;
    Node* rChild;
    Node(int data){
        this -> data = data;
        lChild = NULL;
        rChild = NULL;
    }
};

Node* buildTree(vector<int> arr, int n, int i){
    if(n == 0)  return NULL;
    if(i >= n) return NULL;
    Node *temp = new Node(arr[i]);
    temp -> lChild = buildTree(arr, n, 2 * i + 1);
    temp -> rChild = buildTree(arr, n, 2 * i + 2);
    return temp;
}

void print(Node *head) {

    if(head == NULL)return;

    cout << head -> data << " ";
    print(head -> lChild);
    print(head -> rChild);
}


int main()  {
    vector<int> arr = {1, 2, 3, 4, 5, 5, 6, 8, 12, 42};
    int s = arr.size();
    Node *head = buildTree(arr, s, 0);
    print(head);
}