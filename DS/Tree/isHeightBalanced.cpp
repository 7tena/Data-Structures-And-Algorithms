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
// O(n^2)
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root)
            return 0;
        return (1 + max( maxDepth(root->right), maxDepth(root->left)));
    }
    bool isBalanced(TreeNode* root) {
        if(!root)
            return true;
        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);
        if(abs(lh-rh) < 2 && 
           isBalanced(root->left)&&
            isBalanced(root->right))
            return true;
        return false;
    }
};

// O(n)
bool isBalanced(TreeNode* root, int* height)
{
    int lh = 0, rh = 0;/* l will be true if left subtree is balanced and r will be true if right subtree is balanced */
    int l = 0, r = 0;
    if (root == NULL) {
        *height = 0;
        return 1;
    }/* Get the heights of left and right subtrees in lh and rh And store the returned values in l and r */
    l = isBalanced(root->left, &lh);
    r = isBalanced(root->right, &rh);
    /* Height of current node is max of heights of left and
    right subtrees plus 1*/
    *height = (lh > rh ? lh : rh) + 1;
    /* If difference between heights of left and right
    subtrees is more than 2 then this node is not balanced
    so return 0 */
    if (abs(lh - rh) >= 2)
        return 0;
    /* If this node is balanced and left and right subtrees
    are balanced then return true */
    else
        return l && r;
}