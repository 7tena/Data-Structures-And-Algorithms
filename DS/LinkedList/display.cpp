#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
} *start = NULL, *last = NULL;

void display(struct Node *p){
    if (p != NULL){
        cout << p->data;
        p = p->next;
    }
}

void recursiveDisplay(struct Node *p){
    if(p!=NULL){
        cout<<p->data;
        recursiveDisplay(p->next);
    }
}

void recursiveReverseDisplay(struct Node *p){
    if(p!=NULL){
        recursiveDisplay(p->next);
        cout<<p->data;
    }
}