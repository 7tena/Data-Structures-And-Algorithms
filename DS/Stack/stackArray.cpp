#include <bits/stdc++.h>
#define MAX_SIZE 100
int arr[MAX_SIZE];
int top = -1;

// O(n)
void push(int x){
    if(top == MAX_SIZE){
        return; // overflow condition
    }
    top++;
    arr[top] = x;
}

// O(n)
void pop(){
    if(top == -1){
        return; // underflow condition
    }
    top--;
}

// check if empty
bool isEmpty(){
    return (top == -1?true:false);
}

// get top element
int getTop(){
    return arr[top];
}
