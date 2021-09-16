#include <bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};
int lPalin(ListNode* a) {
    ListNode* stackp = a;
    stack<int> s;
    while(stackp){
        s.push(stackp->val);
        stackp = stackp->next;
    }
    int top;
    while(a){
       top = s.top();
       s.pop();
       if(top != a->val)
        return false;
        a = a->next; 
    }
    return true;
}