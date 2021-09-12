#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
}*head=NULL;

// TC : O(n)
// SC : O(1)
void reverseLInkedList(){
    Node *prev, *current, *next;
    current = head;
    prev = NULL;
    while(current){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
}

// using recursion
// traverse till the end and start reversing.
// TC : O(n)
// SC : O(n)
void recursiveReverse(Node *p){
    if(p == NULL) 
        return;
    recursiveReverse(p->next);
    Node *q = p->next;
    q->next = p;
    p->next = NULL;
}