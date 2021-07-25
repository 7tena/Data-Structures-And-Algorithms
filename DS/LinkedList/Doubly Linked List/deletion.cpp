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