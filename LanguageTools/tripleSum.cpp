#include <bits/stdc++.h>
using namespace std;

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