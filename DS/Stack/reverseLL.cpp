#include <bits/stdc++.h>
#include <stack>
using namespace std;

struct Node{
    int data;
    Node *next;
}*top = NULL;

void reverseLL(){
    if(!top)
        return;
    stack<Node*> S;
    Node *temp = top;
    while(temp){
        S.push(temp);
        temp = temp->next;
    }
    temp = S.top();
    top = temp;
    while(temp){
        temp->next = S.top();
        S.pop();
        temp = temp->next;
    }
    temp->next = NULL;
}