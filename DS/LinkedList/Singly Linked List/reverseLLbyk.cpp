#include<iostream>
using namespace std;

struct node{
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
}*head;
class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        node *curr = head;
        node *next, *prev;
        next = prev = NULL;
        int count = 0;
        while(curr && count<k){
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
                count++;
        }
        if(next)
            head->next = reverse(next, k);
        return prev;
    }
};