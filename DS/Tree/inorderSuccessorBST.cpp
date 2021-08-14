#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};


Node* getNode(Node *root, int data){
    if(!root)
        return;
    if(root->data < data)
        return getNode(root->right, data);
    else if(root->data > data)
        return getNode(root->left, data);
    else 
        return root;
}


Node* findMin(Node* root) {
	if(root == NULL) return NULL;
	while(root->left != NULL)
		root = root->left;
	return root;
}

Node* getInorderSuccessor(Node *root, int data){
    Node *current = getNode(root, data);
    if(!root)
        return;
    if(current->right){
        return findMin(current->right);
    }else{
        Node *ancestor = root;
        Node *successor = NULL;
        while(ancestor != current){
            if(data < ancestor->data){
                successor = ancestor;
                ancestor = ancestor->left;
            }else{
                ancestor = ancestor->right;
            }
            return successor;
        }
    }
}