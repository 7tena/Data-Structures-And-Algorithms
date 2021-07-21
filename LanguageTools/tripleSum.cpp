#include <bits/stdc++.h>
using namespace std;

// O(n^2) 
int tripletSum(int *arr, int n, int num){	
	int count = 0;
    for (int i = 0; i < n - 2; i++){
        unordered_set<int> s;
        int curr_sum = num - arr[i];
        for (int j = i + 1; j < n; j++){
            if (s.find(curr_sum - arr[j]) != s.end()){
                count++;
            }
            s.insert(arr[j]);
        }
    }
    return count;
}

// alternative 
// O(n^2)
int tripletSum(int *arr, int n, int num){	
	int count = 0;
    sort(arr, arr+n);
    for (int i = 0; i < n - 2; i++){
        int sum = num - arr[i];
        int j = i+1;
        int k = n-1;
        while (j<k){
            if(arr[j] + arr[k] == sum)
                count++;
            else if(arr[j] + arr[k] < sum)
                j++;
            else
                k--;
        }
        
    }
    return count;
}