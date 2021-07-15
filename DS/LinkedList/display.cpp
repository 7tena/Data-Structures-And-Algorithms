#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
} *start = NULL, *last = NULL;

void insert(int n){
    if (start == NULL){
        Node *p = new Node;
        p->data = n;
        p->next = NULL;
        start = p;
    }else{
        Node *p = new Node;
        p->data = n;
        p->next = NULL;
        last->next = p;
        last = p;
    }
}

void display(struct Node *p){
    if (p != NULL){
        cout << p->data;
        p = p->next;
    }
}

void recursiveDisplay(struct Node *p){
    if(p!=NULL){
        cout<<p->data;
        recursiveDisplay(p->next);
    }
}

void recursiveReverseDisplay(struct Node *p){
    if(p!=NULL){
        recursiveDisplay(p->next);
        cout<<p->data;
    }
}

int main(){
    int n, no;
    cin >> n;
    start=last;
    while (n--){
        cin >> no;
        insert(n);
    }
    display(start);
    return 0;
}