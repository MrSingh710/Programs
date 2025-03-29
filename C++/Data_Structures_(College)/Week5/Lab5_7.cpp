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
Node* getMid(Node* head){
        Node* slow=head;
        Node* fast=head->next;
        
        while(fast != NULL && fast->next != NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
}
    
Node* reverse(Node* head){
        Node* curr=head;
        Node* prev=NULL;
        Node* next=NULL;
        
        while(curr != NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
}
    
bool isPalindrome(Node* head) {
       if(head->next==NULL){
           return true;
       } 
        Node* mid=getMid(head);
        Node* temp=mid->next;
        mid->next=reverse(temp);
        
        Node* head1=head;
        Node* head2=mid->next;
        while(head2 != NULL){
            if(head1->data != head2->data){
                return false;
            }
            head1=head1->next;
            head2=head2->next;
        }
        
        temp=mid->next;
        mid->next=reverse(temp);
        return true;
}
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

int main(){
    Node* head=new Node(1);
    Node* tail=head;
    insertAtTail(tail,2);
    insertAtTail(tail,3);
    insertAtTail(tail,4);
    insertAtTail(tail,3);
    insertAtTail(tail,2);
    insertAtTail(tail,1);
    print(head);
    if(isPalindrome(head)) cout<<"Your Linked List is Palindrome";
    else cout<<"Your Linked List is not Palindrome";

    
}