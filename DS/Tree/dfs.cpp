/*
- DFS :
    - using stack
    - preorder : <root><left><right>
    - inorder : <left><root><right>
    - postorder : <left><right><root>

Even though we're not using extra memory explicitly, we are using memory implicitly trough call stack.
Space complexity : O(n)
Time complexity: 
 - Best - O(logn)
 - Worst - O(n)
 - Average - O(logn)
*/

#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

void preOrder(Node *root){
    if(root == NULL)
        return;
    cout << root->data;
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node *root){
    if(root == NULL)
        return;
    inOrder(root->left);
    cout << root->data;
    inOrder(root->right);  
}

void postOrder(Node *root){
    if(root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data;
}