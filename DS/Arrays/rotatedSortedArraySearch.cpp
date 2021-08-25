#include <bits/stdc++.h>
using namespace std;

int search(const vector<int> &A, int B) {
    int high = A.size() - 1;
    int low = 0;
    while(low <= high){
        int mid = (low+high)/2; 
        if(A[mid] == B)                     // case 1 : middle lement is B
            return mid;
        else if(A[low] < A[mid]){           // case 2: left half is sorted
            if(B >= A[low] && B < A[mid])   // go searching left
                high = mid-1;
            else                            // go searching right
                low = mid+1;
        }else{                              // case 3: right half is sorted
            if(B <= A[high] && B > A[mid])  // go searching right
                low = mid+1;
            else                            // go searching left
                high = mid-1;
        }
    }
    return -1;
}
