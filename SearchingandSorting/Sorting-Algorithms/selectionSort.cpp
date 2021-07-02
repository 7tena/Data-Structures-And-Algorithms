// worst case : O(n^2)
// best case : O(n^2)
//simplest sorting
// very slow, operates efficiently on smaller data(30)

#include<bits/stdc++.h>
using namespace std;

int* selectionSort(int arr[], int n){
    int imin, temp;
    for(int i = 0; i<n-1; i++){
        imin = i;
        for(int j= i+1 ; j<n ; j++){
            if(arr[j] < arr[imin]){
                imin = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[imin];
        arr[imin] = temp;
    }
    return arr;
}

int main(){
    int n, arr[n];
    cin>> n;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int *p = selectionSort(arr, n);
    for(int i=0 ; i<n ; i++){
        cout<< *(p+i) << " ";
    }
    return 0;
}