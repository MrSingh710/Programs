#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for node with data : "<<value<<endl;
    }
};

void insertAtTail(Node* &tail, int d){
     if(tail==NULL){
       Node* temp=new Node(d);
       tail=temp; 
    }
    else{
        Node* temp = new Node(d);
        tail->next = temp;
        tail=temp;
    }
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=0){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* middleNode(Node* head) {
        Node* slowPointer = head;
        Node* fastPointer = head;
        while (fastPointer != NULL && fastPointer->next != NULL) {
            slowPointer = slowPointer->next;
            fastPointer = fastPointer->next->next;
        }

        return slowPointer;

}
int main(){
    Node* head=new Node(1);
    Node* tail=head;
    insertAtTail(tail,2);
    insertAtTail(tail,3);
    insertAtTail(tail,4);
    insertAtTail(tail,5);
    insertAtTail(tail,6);
    insertAtTail(tail,7);
    print(head);
    cout<<middleNode(head)->data<<endl;

    
}