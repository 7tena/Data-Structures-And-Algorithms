#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
}*head=NULL;

void deleteAtPosition(int n){ //head is the parameter p
    Node* temp = head;
    if(n == 0){
        head = temp->next;
        free(temp);
        return;
    }
    for(int i=0; i<n-2; i++){
        temp = temp->next;
    } // temp points to (n-1)th node
    Node* temp1 = temp->next; // temp1 points to nth node
    temp->next = temp1->next; // delete nth node
    free(temp1);
}