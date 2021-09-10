#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
class Solution {
public:
    int maxDepth(Node* root) {
        if(!root)
            return 0;
        int h = 0;
        vector<Node*>::iterator i;
        for(i = root->children.begin(); i != root->children.end(); i++){
            h = max(h, maxDepth(*i));
        }
        return h+1;
    }
};