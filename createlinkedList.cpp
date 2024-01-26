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

void create(node* &head, int val){
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
        return -1;
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
int main(){
    node* head=NULL;
    create(head,1);
    create(head,1);
    create(head,1);
    create(head,1);
    create(head,1);
    print(head);
    insertAtHead(head, 0);
    print(head);
    cout << searchVal(head , 1);
}
