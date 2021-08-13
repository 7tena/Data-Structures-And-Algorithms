// Time complexity: O(V+E)
// Space complexity: 
// - Best - O(1)
// - Worst - O(n)
// - Average - O(n)
// In a perfect binary free, there are ceil(n/2) nodes at the deepest level

#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

void levelOrder(Node *root){
    if(root == NULL)
        return;
    queue<Node*> visited;
    visited.push(root);
    while(!visited.empty()){
        Node *current = visited.front();
        cout<< visited.front();
        if(current->left)
            visited.push(current->left);
        if(current->right)
            visited.push(current->right);
        visited.pop();
    }
}