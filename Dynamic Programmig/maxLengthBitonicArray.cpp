#include<bits/stdc++.h>
using namespace std;
// efficient
int bitonic(int* A, int n) {
    int* inc = new int[n];
    inc[0] = 1;
    for(int i=1; i<n; i++){
        inc[i] = 1;
        for(int j= i-1; j>=0; j--){
            if(A[j] >= A[i]){ //previous is greater, then ignore.
                continue;
            }
            int len = inc[j]+1;
            if(inc[i] < len){
                inc[i] = len;
            }
        }
    }
    int* dec = new int[n];
    dec[n-1] = 1;
    for(int i=n-2; i>=0; i--){
        dec[i] = 1;
        for(int j= i+1; j<n; j++){
            if(A[j] >= A[i]){ //previous is greater, then ignore.
                continue;
            }
            int len = dec[j]+1;
            if(dec[i] < len){
                dec[i] = len;
            }
        }
    }
    int maxval = inc[0]+dec[0]-1;
    for(int i=1;i<n;i++){
        if(maxval < (inc[i]+dec[i]-1))
            maxval = inc[i]+dec[i]-1;
    }
    delete [] inc;
    delete [] dec;
    return maxval;
}

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n, arr[n];
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int res = bitonic(arr,n);
        cout<<res<<endl;
    }
    return 0;
}


// not efficient, wrong
int bitonic(int* arr, int n){
    int* inc = new int[n];
    int* dec = new int[n];
    inc[0] = 1;
    dec[n-1] = 1;
    for(int i=1; i<n; i++){
        inc[i] = (arr[i] > arr[i-1])? inc[i-1] + 1: 1;
    }
    for(int i=n-2; i>=0 ; i--){
        dec[i] = (arr[i] > arr[i+1])? dec[i+1] + 1 : 1;
    }
    int maxval = inc[0]+dec[0]-1;
    for(int i=1;i<n;i++){
        if(maxval < (inc[i]+dec[i]-1))
            maxval = inc[i]+dec[i]-1;
    }
    delete [] inc;
    delete [] dec;
    return maxval;
}
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n, arr[n];
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int res = bitonic(arr,n);
        cout<<res<<endl;
    }
    return 0;
}