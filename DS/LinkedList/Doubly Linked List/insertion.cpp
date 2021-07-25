/* 
pros:
- access 3 nodes using a single node
- deletion and insertion are comparatively easy compared to singly linked list

cons:
- extra memory for pointers (12(3x4) bytes in total)
- with increased no of links, it is more prone to errors.
*/
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next, *prev;
}*head = NULL;

Node* getNode(int x){           // to get a new node with data = x
    Node *p = new Node;
    p->data = x;
    p->next = NULL;
    p->prev = NULL;
    return p;
}

// insert at head
void insertAtHead(int x){
    Node *p = getNode(x);
    if(head == NULL){
        head = p;
        return;
    }
    head->prev = p;
    p->next = head;
    head = p;
}

//insert at tail
void insertAtTail(int x){
    Node *p = getNode(x);
    if(head == NULL){
        head = p;
        return;
    }
    Node *temp = head;
    while(!temp){
        temp = temp->next;
    }
    temp->next = p;
    p->prev = temp;
}

//insert after a given node
void insertAfter(Node *prev, int x){
    if(prev == NULL){
        insertAtHead(x);            //previous node cannot be null. If it is, it is equivalent to inserting at head;
        return;
    }
    Node *new_node = getNode(x);
    new_node->next = prev->next;    // Make next of new node as next of prev_node
    prev->next = new_node;          // Make the next of prev_node as new_node
    new_node->prev = prev;          // Make prev_node as previous of new_node
    if(new_node->next)              // Change previous of new_node's next node
        new_node->next->prev = new_node;
}

//insert before a given node
void insertBefore(Node *next, int x){
    if(next == NULL){
        insertAtTail(x);            // If next is null, it is equivalent to inserting at head(no previous nodes) or tail(previous nodes present)
        return;
    }
    Node *new_node = getNode(x);
    new_node->prev = next->prev;
    next->prev = new_node;
    new_node->next = next;
    if(new_node->prev != NULL){
        new_node->prev->next = new_node;
    }else{
        head = new_node;
    }

}