#include <bits/stdc++.h>

struct Node{
    int data;
    Node* next;
}*top=NULL;

// O(n)
void push(int x){
    Node* temp = new Node;
    temp->data = x;
    temp->next = top;
    top = temp;
}

// O(n)
void pop(){
    Node *temp = top;
    if(top == NULL)
        return; // nothing to delete
    top = top->next;
    free(temp);
}

bool isEmpty(){
    return (top == NULL?true:false);
}

Node* getTop(){
    return top;
}


