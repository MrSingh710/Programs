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


void insertAtHead(Node* &head, int d){
    if(head==NULL){
       Node* temp=new Node(d);
       head=temp; 
    }
    else{
        Node* temp = new Node(d);
        temp-> next=head;
        head=temp;
    }
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

void insertAtPosition(Node* &tail,Node* &head,int position, int d){
    //insert at first position
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    Node* temp= head;
    int i=1;
    while(i<position-1){
        temp=temp->next;
        i++;
    }
    if(temp->next==NULL){
       insertAtTail(tail,d);
       return;
    }
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}

void deleteNode(int position, Node* &head,Node* &tail){

     if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
     }

     else{
        Node* curr=head;
        Node* prev=NULL;

        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        if(curr->next==NULL){tail=prev;}  
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
     }



}

//print the linked list

void print(Node* &head){
    Node* temp=head;
    while(temp!=0){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int  main() {
    Node* node1= new Node(2);
    Node* head=node1;
    Node* tail=node1;

    print(head);                                

    insertAtTail(tail,8);
    insertAtHead(head,6);

    print(head);                                 

    insertAtPosition(tail,head,4,9);               
    insertAtPosition(tail,head,5,3);              
    insertAtPosition(tail,head,6,7);                
    print(head);    
    deleteNode(6,head,tail);
    print(head);
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;
    return 0;
}