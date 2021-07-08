#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
} *start = NULL, *last = NULL;

int maxNode(struct Node *p){
    int max=p->data;
    p=p->next;
    while(p){
        if(p->data > max){
            max=p->data;
            p=p->next;
        }
    }
    return max;
}

int recursiveMaxNode(struct Node *p){
    int max;
    if(p == NULL){
       return INT32_MIN; 
    }
    max=recursiveMaxNode(p->next);
    if(max < p->data){
        max = p->data;
    }
    return max;
}