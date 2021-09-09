#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

// Iterative - using BFS
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root)
            return NULL;
        queue<TreeNode*> visited;
        visited.push(root);
        TreeNode *current, *temp;
        while(!visited.empty()){
            current = visited.front();
            visited.pop();
            temp = current->left;
            current->left = current->right;
            current->right = temp;

            /* checking individual cases::
            if(current->left && current->right){
                temp = current->left;
                current->left = current->right;
                current->right = temp;
            }else if(!current->left){
                current->left = current->right;
                current->right = NULL;
            }else{
                current->right = current->left;
                current->left = NULL;
            }
            */
            if(current->left)
                visited.push(current->left);
            if(current->right)
                visited.push(current->right);
        }
        return root;
    }
};

// Recursive
void mirror(struct TreeNode* node)
{
    if (node == NULL)
        return;
    else
    {
        struct TreeNode* temp;
        mirror(node->left);
        mirror(node->right);
        temp = node->left;
        node->left = node->right;
        node->right = temp;
    }
}