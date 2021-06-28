// #include <bits/stdc++.h>
// using namespace std;

// bool check(long long pos[], int c, int n, long long distance)
// {
//     int count = 1;
//     long long lastpos = pos[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (pos[i] - lastpos >= distance)
//         {
//             lastpos = pos[i];
//             count++;
//         }
//         if (count == c)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, c;
//         cin >> n >> c;
//         long long pos[n];
//         for(int i=0; i<n; i++)
//         {
//             cin >> pos[i++];
//         }
//         sort(pos, pos + n);
//         long long start = 0;
//         long long end = pos[n - 1] - pos[0];
//         long long ans = -1;
//         while (start <= end)
//         {
//             long long mid =start + (end - start) / 2;
//             if (check(pos, c, n, mid))
//             {
//                 ans = mid;
//                 start = mid + 1;
//             }
//             else
//             {
//                 end = mid - 1;
//             }
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h> 
using namespace std; 
bool ispossibleCows(int *arr, int n, int dmid, int cows) { 
    int tempcows = cows; 
    tempcows--; 
    int lastcow = 0; 
    for (int i = 1; i < n; i++) { 
        if (arr[i] - arr[lastcow] >= dmid) { 
            lastcow = i; tempcows--; 
        } 
    } 
    if (tempcows <= 0) { 
        return true;
    } else { 
        return false; 
    } 
} 

void aggresiveCows(int *arr, int n, int dmin, int dmax, int cows) { 
    int dmid = (dmin + dmax) / 2; 
    if (dmin > dmax) { 
        cout << dmax << endl; 
        return; 
    } 
    if (ispossibleCows(arr, n, dmid, cows)) { 
        aggresiveCows(arr, n, dmid + 1, dmax, cows); 
    } else { 
        aggresiveCows(arr, n, dmin, dmid - 1, cows); 
    } 
} 

int main() { 
    int numberOfTestcase; 
    cin >> numberOfTestcase; 
    while (numberOfTestcase--) { 
        int n, c; cin >> n >> c; 
        int *arr = new int[n]; 
        for (int i = 0; i < n; i++) { 
            cin >> arr[i]; 
        } 
        sort(arr, arr + n); 
        int dmin = 0; 
        int dmax = arr[n - 1]; 
        aggresiveCows(arr, n, dmin, dmax, c); 
        delete[] arr; 
    } 
}
