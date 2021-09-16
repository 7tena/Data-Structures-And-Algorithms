#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
} *start = NULL, *last = NULL;
int intersectPoint(Node* head1, Node* head2)
{
    Node* p = head1;
    Node* q = head2;
    while(p!=q){
        p = p->next;
        q = q->next;
        if(p == q)
            return p->data;
        if(!p)
            p = head2;
        if(!q)
            q = head1;
    }
    return p->data;
}