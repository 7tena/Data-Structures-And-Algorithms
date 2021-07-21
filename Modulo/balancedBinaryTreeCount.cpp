#include<bits/stdc++.h>
using namespace std;

long long int mod = 1e9 + 7; 


int balancedBTs(int h) { 
    if (h <= 1) { 
        return 1; 
    } 
    long long int x = balancedBTs(h - 1); 
    long long int y = balancedBTs(h - 2); 
    int temp1 = (x * x) % mod; 
    int temp2 = (2ll * (x * y) % mod); 
    int ans = (temp1 + temp2) % mod; 
    return ans; 
}

// time limit exceeded
int countBBT(int h){
    if(h == 0 || h == 1){
        return 1;
    }

    int m = pow (10,9) + 7;
    int x = countBBT(h-1);
    int y = countBBT(h-2);
    
    long f = (long)x*x;
    long s = (long)2*x*y;
        
    int ans1 = (int)(f%m);
    int ans2 = (int)(s%m);
    
    int ans = (f + s)%m;
    return ans;
}

int main(){
    
    int t;
    while(t--){
        int n;
        cin>>n;
        int count = countBBT(n);
        cout << count;
    }
    return 0;
}