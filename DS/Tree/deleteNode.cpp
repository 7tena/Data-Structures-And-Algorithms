/*
Time Complexity: The worst case time complexity of delete operation is O(h) where h is the height of the Binary Search Tree. 
In worst case, we may have to travel from the root to the deepest leaf node. 
The height of a skewed tree may become n and the time complexity of delete operation may become O(n)
*/

#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

Node* findMin(Node *root){
    while(root->left != NULL) 
        root = root->left;
	return root;
}

Node* deleteNode(Node* root, int data){
    if(!root)
        return;
    if(data < root->data) 
        deleteNode(root->left, data);
    else if(data > root->data) 
        deleteNode(root->right, data);
    else{
        if(!root->left && !root->right){// one child
            delete root;
            root = NULL;
        }else if(!root->left){// one child-left child empty
            Node *temp = root;
            root = root->right;
            delete temp;
        }else if(!root->right){// one child-right child empty
            Node *temp = root;
            root = root->left;
            delete temp;
        }else{ // two childs
            Node *min = findMin(root->right);
            root->data = min->data; // copy value to root and delete that node
            root->right = deleteNode(root->right, min->data);
        }
    }
    return root;
}