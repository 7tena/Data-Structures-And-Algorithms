#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

// recursive
int height(Node *root){
    if(root == NULL)
        return -1; // to get 0 for leaf nodes
    return max(height(root->left), height(root->right)) + 1; 
}