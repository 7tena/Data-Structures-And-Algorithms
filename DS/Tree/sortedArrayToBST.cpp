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
 TreeNode* sortedArrayToBST2(const vector<int> &A,int b,int e){
    if(b>e)return NULL;
    else if(b==e){
        TreeNode *tmp = new TreeNode(A[b]);
        return tmp;
    }
    else{
        int mid = b+(e-b)/2;
        TreeNode *tmp = new TreeNode(A[mid]);
        tmp->left = sortedArrayToBST2(A,b,mid-1);
        tmp->right = sortedArrayToBST2(A,mid+1,e);
        return tmp;
    }
}

TreeNode* sortedArrayToBST(const vector<int> &A) {
    return sortedArrayToBST2(A,0,A.size()-1);
}
