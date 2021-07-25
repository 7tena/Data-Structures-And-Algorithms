#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
} *start = NULL, *last = NULL;

Node* linearSearch(struct Node *p, int key){
    struct Node* q = NULL; // transposition to start;
    while(p){
        if(key == p->data){
            q->next = p->next; // transposition to start;
            p->next= start; // transposition to start;
            start=p; // transposition to start;
            return p;
        }
        q=p; // transposition to start;
        p=p->next;
    }
    return NULL;
}

Node* recursiveLinearSearch(struct Node *p, int key){
    if(p == NULL){
        return p;
    }
    if(key == p->data){
        return p;
    }
    return recursiveLinearSearch(p->next,key); 
}