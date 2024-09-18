#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *next;

        Node(int data) {
            this->data = data;
            this->next = nullptr;
        }
};

//insert element at end
void insertAtTail(Node* &head, int data) {
    
    Node *newNode = new Node(data);

    if(head == nullptr){
        head = newNode;
        return;
    }

    Node *curr = head;

    while(curr->next != nullptr) {
        curr = curr->next;
    }
    curr->next = newNode;
}

//insert at head
void insertAtHead(Node* &head, int data) {
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

//searching in the linked list
bool search(Node* head, int key) {
    Node *temp = head;

    while(temp != nullptr) {
        if(temp->data == key)
            return true;

        temp = temp->next;
    }
    return false;
}

//delete from the linked list
void deleteElement(Node* &head, int data) {
    Node *temp = head;
    
    while(temp->next->data != data) {
        temp = temp->next;
    }

    temp->next = temp->next->next;
    // delete todelete;
}

void printList(Node* head) {
    Node *curr = head;

    while(curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    Node *head = nullptr;
    insertAtTail(head, 1); 
    insertAtTail(head, 2); 
    insertAtTail(head, 3); 
    insertAtTail(head, 4); 
    insertAtTail(head, 6);
    deleteElement(head, 4);

    printList(head);
    // cout << search(head, 4) << endl;
    // cout << search(head, 9) << endl;
    return 0;
}
