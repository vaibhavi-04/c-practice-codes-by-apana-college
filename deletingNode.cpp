#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
void insertAtHead(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return ;
    }
    n -> next = head;
    head = n;
    return;
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
}
void print(node* head){
    if(head==NULL){
        return;
    }
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp=temp->next;
    }
    cout << "NULL" << endl;
    return;
}
bool searchVal(node* head, int key){
    if(head == NULL){
        cout << "linked list is null" << endl;
        return false;
    }
    node* temp = head;
    while(temp ->next != NULL){
        if(temp -> data == key){
            return true;
        }
        temp = temp -> next;
    }
    return false;

}

void deleteHead(node* &head){
    if(head->next == NULL){
        head = NULL;
        return;
    }
    node* todelete = head;
    head = head->next;
    delete todelete;
}
void deleteNode(node* &head, int key){
    if(head == NULL){
        return;
    }
    if(head->data == key){
        deleteHead(head);
        return;
    }
    node* temp = head;
    while(temp->next != NULL && temp->next->data != key){
        temp = temp->next;
    }
    if(temp->next != NULL){
        node* todelete = temp->next;
        temp->next = todelete->next;
        delete todelete;
        return;
    }
    return;
}


int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    print(head);
    insertAtHead(head, 0);
    print(head);
    deleteNode(head, 5);
    cout << "delete 5**:  ";
    print(head);
    deleteNode(head, 0);
    cout << "delete 0*:  ";
    print(head);
    deleteNode(head, 5);
    cout << "delete 5:  ";
    print(head);
    deleteNode(head, 2);
    cout << "delete 2:  ";
    print(head);
    cout << "search Value :" << searchVal(head , 1);
}
