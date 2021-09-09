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
// recursive
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root)
            return 0;
        return (1 + max( maxDepth(root->right), maxDepth(root->left)));
    }
};

// iterative
int maxDepth(TreeNode* root) {
    if(!root)
        return 0;
    queue<TreeNode*> nodes;
    nodes.push(root);
    int height = 0;
    int n = nodes.size();
    while(!nodes.empty()){
        height++;
        n = nodes.size();
        while(n--){
            TreeNode* curr = nodes.front();
            if(curr->left)
                nodes.push(curr->left);
            if(curr->right)
                nodes.push(curr->right);
            nodes.pop();
        }
    }
    return height;
}