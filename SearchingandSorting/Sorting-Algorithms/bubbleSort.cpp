// worst case : O(n^2)
// best case : O(n)
// very slow, operates efficiently on smaller data

#include<bits/stdc++.h>
using namespace std;

int* bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int flag = 0;
        for(int j=0 ; j<n-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
    }
    return arr;
}

int main(){
    int n, arr[n];
    cin>> n;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int *p = bubbleSort(arr, n);
    for(int i=0 ; i<n ; i++){
        cout<< *(p+i) << " ";
    }
    return 0;
}
