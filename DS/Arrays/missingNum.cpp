#include <bits/stdc++.h>
using namespace std;
/*
using xor
- x1: xor of array elements
- x2: xor of n natural numbers
- x3: x1 xor x2 (missing number)
*/

// using sum
class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        long long sum;
        sum = (n*(n+1))/2;
        long long arrsum = 0;
        for(int i=0; i<n-1; i++){
            arrsum += array[i];
        }
        int m = sum - arrsum;
        return m;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;