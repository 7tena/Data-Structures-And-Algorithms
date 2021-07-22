#include <bits/stdc++.h>
using namespace std;

long long merge(int arr[], int l, int mid, int r){
    long long count = 0;
    int i=l;
    int j=mid;
    int k=0;
    int temp[r-l+1];
    while(i<mid && j<=r){
        if(arr[i]>arr[j]){
            count += mid-i;
            temp[k++] = arr[j++];
        }else{
            temp[k++] = arr[i++];
        }
    }
    while(i<mid)
        temp[k++] = arr[i++];
    while(j<=r)
        temp[k++] = arr[j++];
    for ( i=l,k=0 ; i <= r ; i++,k++)
    {
        arr[i] = temp[k++];
    }
    return count;
    
}

long long mergeSort(int arr[], int l, int r){
    long long count = 0;
    if(l<r){
        int mid  = (l + r)/2;
        long long lc = mergeSort(arr , l ,mid);
        long long rc = mergeSort(arr , mid+1 ,r);
        long long mc = merge(arr , l ,mid+1, r);
        return lc + rc + mc;
    }
    return count;
}

int main() {
    int arr[] = {2,3,5,6,7};
    cout << mergeSort(arr, 0, 5);
    return 0;
}



// long long mergeArray(long long *arr, long long *l, long long *r, int ll, int rl){
//     int i, j, k;
//     i = j = k = 0;
//     long long count = 0;
//     while (i < ll && j < rl){
//         if (l[i] <= r[j])
//         {
//             arr[k] = l[i];
//             k++;
//             i++;
//         }
//         else
//         {
//             count += rl - i;
//             arr[k] = r[j];
//             j++;
//             k++;
//         }
//         while (i < ll)
//         {
//             arr[k] = l[i];
//             i++;
//             k++;
//         }
//         while (j < rl)
//         {
//             arr[k] = r[j];
//             k++;
//             j++;
//         }
//     }
//     return count;
// }

// long long getInversions(long long *arr, int n){
//     long long count  =0;
//     int mid = (n/2);
//     if (n < 2){
//         return 0; 
//     }
//     long long larr[mid], rarr[n - mid];
//     for (int i = 0; i < mid; i++){
//         larr[i] = arr[i];
//     }
//     for (int i = mid; i < n; i++){
//         rarr[i - mid] = arr[i];
//     }
//     long long lc = getInversions(larr, mid);
//     long long rc = getInversions(rarr, n - mid);
//     long long mc = mergeArray(arr, larr, rarr, mid, n - mid);
//     count += lc+rc+mc;
//     return count;
// }