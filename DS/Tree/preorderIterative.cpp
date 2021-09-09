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
    vector<int> preorderTraversal(TreeNode* A) {
        vector<int> preorder;
        if(A == NULL){
            return preorder;
        }
        stack<TreeNode *> s;
        TreeNode* current;
        s.push(A);
        while(!s.empty()){
            current = s.top();
            s.pop();
            preorder.push_back(current->val);
            if(current->right)
                s.push(current->right); // The right child is pushed before the left child to make sure that the left subtree is processed first.
            if(current->left)
                s.push(current->left);
        }
        return preorder;
    }
};