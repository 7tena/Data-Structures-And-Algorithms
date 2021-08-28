#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

vector<int> inorderTraversal(TreeNode* A) {
    vector<int> inorder;
    stack<TreeNode *> s;
    TreeNode *current = A;
    while( current || !s.empty()){
        while(current){
            s.push(current);
            current = current->left;
        }
        current = s.top();
        s.pop();
        inorder.push_back(current->val);
        current = current->right;
    }
}