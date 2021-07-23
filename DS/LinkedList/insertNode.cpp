#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
}*head=NULL;

// count no of nodes
int count(struct Node *p){
    int count=0;
    if (p != NULL){
        count++;
        p = p->next;
    }
    return count;
}

// 0 = head/start
// insert using index
// insert at a particular position
void insertAtPosition(Node* p, int pos, int x){
    if(pos < 0 || pos > count(head)){
        return;
    }
    struct Node* t = new Node;
    t->data=x;
    if(p == 0){ // 1 if indexing starts from 1.
        t->next=head;
        head=t;
    }else{
        for(int i=0; i< pos-1; i++) // pos-2 if indexing starts from 1.
            p=p->next;
        t->next= p->next;
        p->next=t;
    }
}


// insert without index
void insertFront(int x){
    Node* temp = new Node;
    temp->data = x;
    temp->next = head;
    head = temp;
}

// head only
void insertLast(int x){
    Node* temp = new Node;
    temp->data = x;
    Node* p = head;
    if(!head){  // empty list
        head->next = temp;
    }else{
        while(p){
            p = p->next;
        }
        p->next = temp;
    }
}
