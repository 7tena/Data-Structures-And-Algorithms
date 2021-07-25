#include <bits/stdc++.h>
#include <stack>
using namespace std;

// Reverse string using stack
// TC : O(n)
// SC : O(n)
void reverseString(char *C, int n){
    stack<char> S;
    for(int i = 0; i<n ; i++){
       S.push(C[i]); 
    }
    for(int i = 0; i<n ; i++){
        C[i] = S.top();
        S.pop();
    }
}