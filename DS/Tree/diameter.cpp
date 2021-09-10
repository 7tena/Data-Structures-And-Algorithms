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
    int diameter = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)
            return 0;
        int smallDiameter;
        smallDiameter = maxDepth(root->left) + maxDepth(root->right);
        if(smallDiameter > diameter)
            diameter = smallDiameter;
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        return diameter;
    }
};

// O(n)
int diameterOpt(TreeNode* root, int* height)
{
    int lh = 0, rh = 0;
    int ldiameter = 0, rdiameter = 0;
    if (root == NULL) {
        *height = 0;
        return 0; // diameter is also 0
    }
    // Get the heights of left and right subtrees in lh and
    // rh And store the returned values in ldiameter and
    // ldiameter
    ldiameter = diameterOpt(root->left, &lh);
    rdiameter = diameterOpt(root->right, &rh);
    // Height of current node is max of heights of left and
    // right subtrees plus 1
    *height = max(lh, rh) + 1;
    return max(lh + rh + 1, max(ldiameter, rdiameter));
}