#include<bits/stdc++.h>
using namespace std;
// Recursion : O(2^n)
int fib(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return fib(n-1) + fib(n-2);
}
// Dynamic Programming : O(n)
int fib2(int n, int* arr){
    if(n == 0 || n == 1)
        return 1;
    if(arr[n] > 1)
        return arr[n];
    int res = fib2(n-1, arr) + fib2(n-2, arr);
    arr[n] = res;
    return res;
}
// Iteration : O(n)
int fib3(int n){
    int* arr = new int[n+1];
    arr[0] = 1;
    arr[1] = 1;
    for(int i=2 ; i<=n ; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    int output = arr[n];
    delete [] arr;
    return output;
}