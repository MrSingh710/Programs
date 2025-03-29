#include<iostream>
#include<unordered_map>
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
void Intersection(Node * h1, Node * h2){
    unordered_map<int, bool> m;
    while(h1 != NULL){
        m[h1->data] = 1;
        h1 = h1->next;
    }

    while(h2 != NULL){
        if(m[h2->data])cout<<h2->data<<" ";
        h2 = h2->next;
    }
}

int main(){
    Node* head1=new Node(1);
    Node* tail1=head1;

    insertAtTail(tail1,2);
    insertAtTail(tail1,3);
    insertAtTail(tail1,4);
    insertAtTail(tail1,5);

    Node* head2=new Node(6);
    Node* tail2=head2;

    insertAtTail(tail2,4);
    insertAtTail(tail2,9);
    insertAtTail(tail2,3);
    insertAtTail(tail2,5);

    Intersection(head1,head2);
    
}
