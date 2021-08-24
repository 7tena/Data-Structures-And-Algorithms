#include <bits/stdc++.h>
using namespace std;
// using xor. can also implement it using hash map but not space efficient.
class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        int res = 0;
        for(int i=0; i<n; i++){
            res = res^arr[i];
        }
        return res;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getOddOccurrence(arr, n);
        cout << ans << "\n";
    }
    return 0;
}