#include "2_insertionUsingHeadTail.cpp"


void deleteHead(Node* &head, Node* &tail) {
    if(head == NULL) {
        cout << "LL is empty";
        return;
    }

    // Creation of temporary pointer for pointing on the head
    Node* prev = head;

    // Changing head 
    head = head -> next;
    prev -> next = NULL;

    // Deleting first node
    delete prev;
}


void deleteTail(Node* &head, Node* &tail) {
    if(tail == NULL) {
        cout << "LL is empty";
        return;
    }

    // Creating a node for traversing to 2nd last node
    Node* prev = head;

    // Traversal
    while(prev -> next != tail) {
        prev = prev -> next;
    }

    // Deleting the last node
    prev -> next = NULL;
    delete tail;
    tail = prev;

}


void deleteInBetween(int position, Node* &head, Node* &tail) {
    if(head == NULL) {
        cout << "LL is empty";
        return;
    }

    if(position == 1) {
        deleteHead(head, tail);
        return;
    }

    if(position == findLength(head)) {
        deleteTail(head, tail);
        return;
    }

    if(position > findLength(head)) {
        return;
    }

    int pos = 1;
    Node* prev = head;
    while(pos < position - 1) {
        prev = prev -> next;
        pos++; 
    }

    Node* current = prev -> next;
    prev -> next = prev -> next -> next;
    current -> next = NULL;
    delete current;
    
}


int main() {
    Node* head = NULL;      // For first allocation we have to always initialise it with NULL 
    Node* tail;
    print(head);
    insertAtHead(head, tail, 20); 
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 50);
    print(head);

    insertAtTail(head, tail, 77);
    print(head);
    insertAtTail(head, tail, 70);
    insertAtTail(head, tail, 80);
    print(head);

    insertAtPosition(0, head, tail, 140);
    print(head);

    deleteHead(head, tail);
    print(head);

    deleteTail(head, tail);
    print(head);

    deleteInBetween(4, head, tail);
    print(head);

}

