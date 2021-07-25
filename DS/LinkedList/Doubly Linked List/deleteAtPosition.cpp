#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next, *prev;
}*head = NULL;

void deleteNode(Node *del_node){
    if(head == NULL || del_node == NULL)
        return;
    if(del_node == head)
        head = del_node->next;
    if(del_node->next)
        del_node->next->prev = del_node->prev;
    if(del_node->prev)
        del_node->prev->next = del_node->next;
    free(del_node);
}

// Delete at a position n
// Time Complexity: O(n), in the worst case where n is the number of nodes in the doubly linked list.
void deleteAtPosition(int n){
    if(head == NULL || n < 0)
        return;
    Node *p = head;
    for(int i = 1; p && i<n ; i++)
        p = p->next;                    
    if(p == NULL)                       // n > no of nodes
        return;
    deleteNode(p);                      // delete the node p;
}