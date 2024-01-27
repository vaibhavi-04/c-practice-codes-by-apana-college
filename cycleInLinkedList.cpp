#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    bool flag;
    node(int val){
        data = val;
        next = NULL;
        flag = false;
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
void cycle(node* &head, int k){
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

bool cycledetection(node* &head){
    node* temp = head;
    temp->flag=true;
    while(temp->next!=NULL){
        if(temp->next->flag){
            cout <<temp->next->data;
            return true;
        }
        temp=temp->next;
        temp->flag=true;
    }
    return false;

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

    cycle(head, 8);
    cycledetection(head);
    
    // node* newhead = reverserec(head);
    // print(newhead);
    // node* newhead = reverseKnodes(head,5);
    // print(newhead);
    // print(newhead);

}
