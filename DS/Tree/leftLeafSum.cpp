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

bool isLeaf(TreeNode* node){
        if(!node)
            return false;
        if (node->left == NULL && node->right == NULL)
            return true;
        return false;
    }
int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        if(root){
            if(isLeaf(root->left))
                sum += root->left->val;
            else
                sum += sumOfLeftLeaves(root->left);
            sum += sumOfLeftLeaves(root->right);
        }
        return sum;
    }