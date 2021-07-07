#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
} *start = NULL, *last = NULL;

void sum(struct Node *p){
    int sum=0;
    if (p != NULL){
        sum++;
        p = p->next;
    }
}

int recursiveSum(struct Node *p){
    if(p!=NULL){
        return (p->data + recursiveSum(p->next));
    }
}