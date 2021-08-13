/*
Time Complexity: O(n) 
Auxiliary Space: O(1) if Function Call Stack size is not considered, otherwise O(n)
*/

#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

// using min and max bounds
bool isBST(Node *root, int min, int max){
    if(!root)
        return;
    if(root->data > min && 
       root->data < max && 
       isBST(root->left, min, root->data) &&
       isBST(root->right, root->data, max))
        return true;
    else    
        return false;
}
bool isBSTmain(Node *root){
    return isBST(root, INT_MIN, INT_MAX);
}