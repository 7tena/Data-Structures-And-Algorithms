#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
// Recursive
Node* sortedMerge(Node* h1, Node* h2){
    if(!h1)
        return h2;
    if(!h2)
        return h1;
    if(h1->data < h2->data){
        h1->next = sortedMerge(h1->next, h2);
        return h1;
    }else{
        h2->next = sortedMerge(h1, h2->next);
        return h2;
    }
}

// Iterative
struct Node* mergeUtil(struct Node* h1,
                       struct Node* h2)
{
    // if only one node in first list
    // simply point its head to second list
    if (!h1->next) {
        h1->next = h2;
        return h1;
    }
 
    // Initialize current and next pointers of
    // both lists
    struct Node *curr1 = h1, *next1 = h1->next;
    struct Node *curr2 = h2, *next2 = h2->next;
 
    while (next1 && curr2) {
        // if curr2 lies in between curr1 and next1
        // then do curr1->curr2->next1
        if ((curr2->data) >= (curr1->data) && (curr2->data) <= (next1->data)) {
            next2 = curr2->next;
            curr1->next = curr2;
            curr2->next = next1;
 
            // now let curr1 and curr2 to point
            // to their immediate next pointers
            curr1 = curr2;
            curr2 = next2;
        }
        else {
            // if more nodes in first list
            if (next1->next) {
                next1 = next1->next;
                curr1 = curr1->next;
            }
            // else point the last node of first list
            // to the remaining nodes of second list
            else {
                next1->next = curr2;
                return h1;
            }
        }
    }
    return h1;
}
struct Node* merge(struct Node* h1,
                   struct Node* h2)
{
    if (!h1)
        return h2;
    if (!h2)
        return h1;
    if (h1->data < h2->data)
        return mergeUtil(h1, h2);
    else
        return mergeUtil(h2, h1);
}