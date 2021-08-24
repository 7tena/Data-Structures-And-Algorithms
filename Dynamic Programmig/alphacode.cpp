#include<bits/stdc++.h>
using namespace std;
// Recursion
int alphacode(int* n, int size){
    if(size == 0 || size == 1)
        return 1;
    int output = alphacode(n, size-1);
    if((10*n[size-2] + n[size-1]) <= 26){
        output += alphacode(n,size-2);
    }
    return output;
}
// Iterative solution
int alphacode(int* n, int size){
    int* arr = new int[size+1];
    arr[0] = 1;
    arr[1] = 1;
    for(int i=2; i<= size; i++){
        arr[i] = arr[i-1];
        if((10*arr[i-2] + arr[i-1]) <= 26){
            arr[i] += arr[i-2];
        }
    }
    int output = arr[size];
    delete [] arr;
    return output;
}
// Dynamic Programming
int alphacode(int* n, int size, int* arr){
    if(size == 0 || size == 1)
        return 1;
    if(arr[size] > 0)
        return arr[size];    
    int output = alphacode(n, size-1);
    if((10*n[size-2] + n[size-1]) <= 26){
        output += alphacode(n,size-2);
    }
    arr[size] = output;
    return output;
}