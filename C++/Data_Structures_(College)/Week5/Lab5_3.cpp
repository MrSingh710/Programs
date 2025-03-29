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
Node* mergeTwoLists(Node* l1,Node* l2) {
		if(l1 == NULL) return l2;
		if(l2 == NULL) return l1;
		
		if(l1 -> data <= l2 -> data){
			l1 -> next = mergeTwoLists(l1 -> next, l2);
			return l1;
		}
		else{
			l2 -> next = mergeTwoLists(l1, l2 -> next);
			return l2;            
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
    Node* head1=new Node(1);
    Node* tail1=head1;
    insertAtTail(tail1,2);
    insertAtTail(tail1,3);
    insertAtTail(tail1,4);
    insertAtTail(tail1,5);
    Node* head2=new Node(2);
    Node* tail2=head2;
    insertAtTail(tail2,5);
    insertAtTail(tail2,7);
    insertAtTail(tail2,8);
    insertAtTail(tail2,9);
    Node * Ans= mergeTwoLists(head1,head2);
    print(Ans);

}