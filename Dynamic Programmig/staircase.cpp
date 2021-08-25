#include<bits/stdc++.h>
using namespace std;
long long int mod = 1e9 + 7;
// time limit exceeded, recursive
int staircase(int n, int* arr){
    if(n == 1 || n == 2){
        return n;
    }
    if(n == 3){
        return 4;
    }
    if(arr[n] > 4)
        return arr[n];
    int output = staircase(n-1, arr) + staircase(n-2, arr) + staircase(n-3, arr);
    arr[n] = output;
    return (output % mod); 
}

// iterative 
int staircase(int n, int* arr){
    if(n == 1 || n == 2){
        return n;
    }
    if(n == 3){
        return 4;
    }
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;
    for(int i = 4; i<=n ; i++){
        arr[i] = (arr[i-1] + arr[i-2] + arr[i-3])%mod;
    } 
    return arr[n]%mod ;
}

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int* arr = new int[n+1];
        int res = staircase(n, arr);
        cout<<res<<endl;
        delete [] arr;
    }
    return 0;
}