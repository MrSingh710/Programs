#include <iostream>
#include<unordered_map>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

bool checkLoop(Node* head) {
    unordered_map<Node*, bool> vis;
    Node* temp = head;
    while(temp != NULL) {
        if(vis.find(temp) != vis.end()) {
            return true;
        }

        vis[temp] = true;
        
        temp = temp -> next;

    }
    return false; 

}

int main() {
    Node* head = new Node(0);
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    
    head -> next = first;
    first -> next = second;
    second -> next = third;
    third -> next = first;

    if(checkLoop(head)) {
        cout << "Loop is present" << endl;
    }
    else {
        cout << "Loop is not present" << endl;
    }

}