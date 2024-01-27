#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node* prev;
    node* next;
    node (int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};
void insertAtHead(node* &head,int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
    }
    n ->next = head;
    if(head !=NULL)
    {
        head -> prev = n;
    }
    head = n;

}
void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = n;
    n->prev = temp;
}
void display(node* head) {
    node* temp = head;
    while(temp != NULL){
        cout << temp -> data << "->" ;
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}
void deleteHead(node* &head){
    if(head ->next == NULL){
        head = NULL;
        return;
    }
    node* temp = head;
    head->next->prev=NULL;
    head = head -> next;
    delete temp;
}
void deletenode(node* &head,int val){
    if(head == NULL){
        return;
    }
    node* temp = head;
    if(head-> data == val){
        deleteHead(head);
        return;
    }
    while(temp!=NULL){
        if(temp->data == val){
            break;
        }
        temp=temp->next;
    }
    if(temp!= NULL){
        temp->prev->next = temp->next;
        if(temp->next!=NULL)
        {
            temp->next->prev=temp->prev;
        }
        delete temp;
    }
    return;
}
int main() {
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 9);
    display(head);    
    insertAtHead(head, 9);
    display(head);  
    deletenode(head, 9);
    display(head);  
    deletenode(head, 3);
    display(head);  
    deletenode(head, 9);
    display(head);


}
