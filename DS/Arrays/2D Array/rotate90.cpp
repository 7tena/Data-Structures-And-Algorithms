#include<bits/stdc++.h>
using namespace std;
/*
You are given an n x n 2D matrix representing an image.Rotate the image by 90 degrees (clockwise).You need to do this in place.
Note that if you end up using an additional array, you will only receive partial score. Example:
If the array is
[
    [1, 2],
    [3, 4]
]
Then the rotated array becomes:
[
    [3, 1],
    [4, 2]
]
*/
void rotate(vector<vector<int> > &A) {
    int n = A.size();
    for(int i=0; i<n/2; i++){ //reverse array
        vector<int> temp = A[i];
        A[i] = A[n-i-1];
        A[n-i-1] = temp;
    }
    for(int i = 0; i<n ; i++){ //transpose array
        for(int j=i+1; j<n; j++){
            int temp = A[j][i];
            A[j][i] = A[i][j];
            A[i][j] = temp;
        }
    }
}

