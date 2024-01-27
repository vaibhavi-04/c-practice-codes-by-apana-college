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
node* reverselink(node* &head) {
    if( head == NULL){
        return NULL;
    }
    if( head->next == NULL){
        return head;
    }
    node* prevptr = NULL;
    node* curptr = head;
    node* nextptr;
    while(curptr != NULL){
        nextptr = curptr -> next;
        curptr -> next = prevptr;
        prevptr = curptr;
        curptr = nextptr;
    }
    return prevptr;
}
node* reverserec(node* &head){
    if(head== NULL || head->next ==NULL){
        return head;
    }
    node* newhead = reverserec(head -> next);
    head ->next->next = head;
    head->next = NULL;
    return newhead;
}
node* reverseKnodes(node* &head, int k) {
    node* prevptr = NULL;
    node* curptr = head;
    node* nextptr;
    int count = 0;
    while(curptr!=NULL && count < k){
        nextptr=curptr->next;
        curptr->next = prevptr;
        prevptr = curptr;
        curptr=nextptr;
        count++;
    }
    if (curptr!=NULL){
        head->next=curptr;
    }
    

    return prevptr;
}
void makecycle(node* &head, int k){
    int count = 1;
    node* temp = head;
    node* dummynode=head;
    while(temp->next != NULL){
        if(count == k){
            dummynode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp -> next = dummynode;
    return;
}
bool detectcycle(node* head){
    node* fast = head;
    node* slow = head;
    while(fast !=NULL && fast->next!=NULL){
        slow = slow->next;
        fast= fast->next->next;
        if(fast==slow){
            return true;
        }
    }
    return false;

}
void removecycle(node* &head){
    node* slow= head;
    node* fast = head;
    do{
        slow = slow -> next;
        fast = fast -> next -> next;
    }while(slow!=fast);
    fast = head;
    while(fast -> next != slow -> next) {
        fast = fast -> next;
        slow = slow -> next;
    }
    slow -> next = NULL;
}
int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    insertAtTail(head,8);
    print(head);

    makecycle(head, 4);
    cout << detectcycle(head) <<endl;
    removecycle(head);
    cout << detectcycle(head) << endl;
    print(head);

    
    

}
