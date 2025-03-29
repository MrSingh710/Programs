#include "2_insertionUsingHeadTail.cpp"

void deleteHead(Node* &head, Node* &tail) {
    if(head == NULL) {
        cout << "LL is empty";
        return;
    }
    if(head -> next == NULL) {
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete head;
        return;
    }

    Node* temp = head;
    head = head -> next;
    head -> prev = NULL;
    temp -> next = NULL;
    delete temp;
}

void deleteTail(Node* &head, Node* &tail) {
    if(head == NULL) {
        cout << "LL is empty";
        return;
    }
    if(head -> next == NULL) {
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete head;
        return;
    }
    Node* prevNode = tail -> prev;
    prevNode -> next = NULL;
    tail -> prev = NULL;
    delete tail;
    tail = prevNode;
}


void deletePosition(int position, Node* &head, Node* &tail) {
    if(head == NULL) {
        cout << "LL is empty";
        return;
    }
    if(head -> next == NULL) {
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete head;
        return;
    }
    if(position == 1) {
        deleteHead(head, tail);
        return;
    }
    if(position == lengthOfLL(head)) {
        deleteTail(head, tail);
        return;
    }
    if(position > lengthOfLL(head)) {
        cout << "Enter valid position" << endl;
        return;
    }

    Node* current = head;
    while(--position) {
        current = current -> next;
    } 
    current -> next -> prev = current -> prev;
    current -> prev -> next = current -> next;
    current -> next = NULL;
    current -> prev = NULL;
    delete current;

} 



int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 40);
    print(head);

    insertAtTail(head, tail, 60);
    insertAtTail(head, tail, 70);
    print(head);

    insertAtPosition(2, head, tail, 50);
    print(head);

    deleteHead(head, tail);
    print(head);

    insertAtTail(head, tail, 90);
    insertAtTail(head, tail, 100);
    print(head);

    deleteTail(head, tail);
    print(head);

    deletePosition(6, head, tail);
    print(head); 

}