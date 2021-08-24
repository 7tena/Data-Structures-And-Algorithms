#include<bits/stdc++.h>
using namespace std;
/*
2 1 3 4 9 7 8
o/p = 4.
*/
int lis(const vector<int> &A) {
    int n = A.size();
    int* arr = new int[n];
    arr[0] = 1;
    for(int i=1; i<n; i++){
        arr[i] = 1;
        for(int j= i-1; j>=0; j--){
            if(A[j] >= A[i]){ //previous is greater, then ignore.
                continue;
            }
            int len = arr[j]+1;
            if(arr[i] < len){
                arr[i] = len;
            }
        }
    }
    int max=0;
    for(int i=0; i<n; i++){
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}
