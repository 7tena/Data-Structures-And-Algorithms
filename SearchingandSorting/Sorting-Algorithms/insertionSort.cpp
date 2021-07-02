// worst case : O(n^2)
// best case : O(n)
// very slow, operates efficiently on smaller data(30)
// efficient than bubbleSort and selectionSort

#include<bits/stdc++.h>
using namespace std;

int* insertionSort(int arr[], int n){
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    return arr;
}

int main(){
    int n, arr[n];
    cin>> n;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int *p = insertionSort(arr, n);
    for(int i=0 ; i<n ; i++){
        cout<< *(p+i) << " ";
    }
    return 0;
}