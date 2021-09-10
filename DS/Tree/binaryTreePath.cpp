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
    void leafPath(vector<string> &ans, string path, TreeNode* root){
        if(!root)
            return;
        path = path+to_string(root->val);
        if(!root->left && !root->right)
            ans.push_back(path);
        else
            path = path+"->";
        leafPath(ans, path, root->left);
        leafPath(ans, path, root->right);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string path;
        leafPath(ans, path, root);
        return ans;
    }
};