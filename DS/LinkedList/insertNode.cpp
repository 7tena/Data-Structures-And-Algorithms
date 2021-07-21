// insert at a particular position
// 0 = head/start
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
}*first=NULL;

// count no of nodes
int count(struct Node *p){
    int count=0;
    if (p != NULL){
        count++;
        p = p->next;
    }
    return count;
}

// insert using index
void insertAtPosition(Node* p, int pos, int x){
    if(pos < 0 || pos > count(first)){
        return;
    }
    struct Node* t = new Node;
    t->data=x;
    if(p == 0){
        t->next=first;
        first=t;
    }else{
        for(int i=0; i< pos-1; i++)
            p=p->next;
        t->next= p->next;
        p->next=t;
    }
}


// insert without index
void insertFront(int x){

}

void insertLast(int x){
    
}
