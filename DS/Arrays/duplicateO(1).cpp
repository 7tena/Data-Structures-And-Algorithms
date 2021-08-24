#include<bits/stdc++.h>
using namespace std;
/*
3 4 1 4 1 
xor1 = 1
xor2 = 3
repeat = 2
*/
int repeatedNumber(const vector<int> &A) {
    int i,xor1=0,xor2=1;
    for(i=0;i<A.size();i++)
    {
        xor1^=A[i];
    }
    int n=A.size();
    for(i=2;i<=(n-1);i++)
    {
        xor2^=i;
    }
    
    int repeat;
    repeat=xor1^xor2;
    
    return repeat;
}