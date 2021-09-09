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

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ances;
        if(root == p || root == q ||(root->val < q->val && root->val > p->val) || (root->val > q->val && root->val < p->val)){
         return root;   
        }
        else if(root->val > p->val){
         ances = lowestCommonAncestor(root->left, p, q);   
        }else
            ances = lowestCommonAncestor(root->right, p, q);
        return ances;
    }
};