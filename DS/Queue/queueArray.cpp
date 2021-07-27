#include <bits/stdc++.h>
using namespace std;
int front = -1;
int rear = -1;
const int n = 100;
int q[n];

void enqueue(int x){
    if(isFull) return;
    if(isEmpty){
        rear = front = 0;
    }else{
        rear = (rear+1)%n;              // circular queue
    }
    q[rear] = x;
}

void dequeue(){
    if(isEmpty) return;
    else if(front == rear){
        front = rear = -1;
    }else{
        front = (front+1)%n;            // circular queue
    }
}

int peek(){
    if(isEmpty) return;                 // nothing to display
    return q[front];
}

bool isEmpty(){
    return (front == -1 && rear == -1); 
}

bool isFull(){
    return (rear+1)%n == front ? true : false;
}

void print(){  
	int count = (rear+n-front)%n + 1;   // Finding number of elements in queue
	cout<<"Queue       : ";
	for(int i = 0; i <count; i++)
	{
		int index = (front+i) % n;      // Index of element while travesing circularly from front
		cout<<q[index]<<" ";
	}
}
