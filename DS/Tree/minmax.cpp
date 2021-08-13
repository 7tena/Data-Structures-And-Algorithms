#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

// recursive min
int min(Node *root){
    if(root == NULL)
        return; // empty tree
    if(root->left == NULL)
        return root->data;
    return min(root->left);
}

// iterative min
int min(Node *root){
    if(root == NULL)
        return; // empty tree
    while(root->left != NULL)
        root = root->left;
    return root->data;
}

// recursive max
int max(Node *root){
    if(root == NULL)
        return; // empty tree
    if(root->right == NULL)
        return root->data;
    return max(root->right);
}

// iterative max
int max(Node *root){
    if(root == NULL)
        return; // empty tree
    while(root->right != NULL)
        root = root->right;
    return root->data;
}