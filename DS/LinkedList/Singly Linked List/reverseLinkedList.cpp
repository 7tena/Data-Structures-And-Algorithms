#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
}*head=NULL;

void reverseLInkedList(){
    Node *prev, *current, *next;
    current = head;
    prev = NULL;
    while(!current){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
}

// using recursion
// traverse till the end and start reversing.
void recursiveReverse(Node *p){
    if(p == NULL) 
        return;
    recursiveReverse(p->next);
    Node *q = p->next;
    q->next = p;
    p->next = NULL;
}