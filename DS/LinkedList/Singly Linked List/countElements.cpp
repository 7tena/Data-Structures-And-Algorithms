#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
} *start = NULL, *last = NULL;

void count(struct Node *p){
    int count=0;
    if (p != NULL){
        count++;
        p = p->next;
    }
}

int recursiveCount(struct Node *p){
    if(p!=NULL){
        return (1 + recursiveCount(p->next));
    }
}