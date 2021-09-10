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
//     int prev = INT_MIN;
//     int max = 0;
//     int count = 0;
//     vector<int> modes;
// public:
//     void inorder(TreeNode* root){
//         if(!root)
//             return;
        
//         inorder(root->left);
        
//         if(prev){
//             if(prev == root->val)
//                 count++;
//             else
//                 count = 1;
//         }
        
//         if(count > max){
//             max = count;
//             modes.clear();
//                 modes.push_back(root->val);
//         }else if(count == max){
//                 modes.push_back(root->val);
//         }
        
//         prev = root->val;
        
//         inorder(root->right);
//     }
//     vector<int> findMode(TreeNode* root) {
//         inorder(root);
//         return modes;
//     }
    int maxFreq = 0, currFreq = 0, precursor = INT_MIN;
    vector<int> res;
    public:
    vector<int> findMode(TreeNode *root)
    {
        inorderTraversal(root);
        return res;
    }

    void inorderTraversal(TreeNode *root)
    {
        if (root == NULL) return; // Stop condition
        inorderTraversal(root->left); // Traverse left subtree
        if (precursor == root->val) currFreq++;
        else currFreq = 1;
        if (currFreq > maxFreq)
        {// Current node value has higher frequency than any previous visited
            res.clear();
            maxFreq = currFreq;
            res.push_back(root->val);
        }
        else if (currFreq == maxFreq)
        {// Current node value has a frequency equal to the highest of previous visited
            res.push_back(root->val);
        }
        precursor = root->val; // Update the precursor
        inorderTraversal(root->right); // Traverse right subtree
    }
};