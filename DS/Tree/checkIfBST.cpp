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
        return true;
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

//inorder traversal
bool isBSTUtil(struct Node* root, Node *&prev)
{
    // traverse the tree in inorder fashion and 
    // keep track of prev node
    if (root){
        if (!isBSTUtil(root->left, prev))
          return false;
    
        // Allows only distinct valued nodes 
        if (prev != NULL && root->data <= prev->data)
          return false;
        prev = root;
    
        return isBSTUtil(root->right, prev);
    }
    
    return true;
}
   
bool isBST(Node *root)
{
   Node *prev = NULL;
   return isBSTUtil(root, prev);
}