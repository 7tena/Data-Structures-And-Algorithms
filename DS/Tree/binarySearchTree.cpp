#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

// get new node
Node *getNode(int x){
    Node *newNode = new Node;
    newNode->data = x;
    newNode->right = newNode->left = NULL;
}

// insertion
Node *insert(Node *root, int x){
    if(root == NULL)
        root = getNode(x);
    else if(root->data <= x) 
        root->left = insert(root->left, x);
    else 
        root->right = insert(root->right, x);
    return root;
}

// searching
bool search(Node *root, int x){
    if(root == NULL) 
        return false;
    else if(root->data == x) 
        return true;
    else if(root->data <= x) 
        search(root->left, x);
    else 
        search(root->right, x);
}

int main(){
    Node *root = NULL;
    root = insert(root,15);	
	root = insert(root,10);	
	root = insert(root,20);
	root = insert(root,25);
	root = insert(root,8);
	root = insert(root,12);
	int number;
	cout<<"Enter number be searched\n";
	cin>>number;
	if(search(root,number) == true) cout<<"Found\n";
	else cout<<"Not Found\n";
}
