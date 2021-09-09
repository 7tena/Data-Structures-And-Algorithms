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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        if(root == NULL)
            return postorder;
        stack<TreeNode*> s1;
        stack<TreeNode*> s2;
        s1.push(root);
        TreeNode* current;
        while(!s1.empty()){
            current = s1.top();
            s1.pop();
            s2.push(current);
            if(current->left){
                s1.push(current->left);
            }if(current->right){
                s1.push(current->right);
            }
        }
        while(!s2.empty()){
            current = s2.top();
            s2.pop();
            postorder.push_back(current->val);
        }
        return postorder;
    }
};

