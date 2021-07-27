#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
}*front = NULL, *rear = NULL;

void enqueue(int x){
    Node *temp = new Node;
    temp->data = x;
    temp->next = NULL;
    if(isEmpty()){
        front = rear = temp;
        return;
    }else{
	    rear->next = temp;
	    rear = temp;
    }
}

void dequeue(){
    Node* temp = front;
	if(isEmpty()) {
		return;
	}
	if(front == rear) {
		front = rear = NULL;
	}else {
		front = front->next;
	}
	free(temp);
}

int peek(){
    if(isEmpty) return; // nothing to return
    return front->data;
}
 
bool isEmpty(){
    return front == NULL? 1:0;
}

void display(){
    Node *temp = front;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
}