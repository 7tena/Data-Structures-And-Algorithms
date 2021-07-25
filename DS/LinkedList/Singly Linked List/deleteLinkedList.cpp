// Time Complexity: O(n) 
// Auxiliary Space: O(1)
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
}*head=NULL;

void deleteLL(Node*p){
    Node* current = head;
    Node* next = NULL;
    while(current!=NULL){
        next = current->next; // move to next pointer
        free(current); // free current pointer
        current = next;
    }
    head = NULL;
}