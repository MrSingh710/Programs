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
Node* removeNthFromEnd(Node* head, int n) {
        Node* temp=head;
        int size=0;
        while(temp){
            size++;
            temp=temp->next;
        }
        int idx=size-n-1;
        temp=head;
        if(idx==-1) return temp->next;
        while(idx--){
             temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
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
    removeNthFromEnd(head,3);
    print(head);

    
}
