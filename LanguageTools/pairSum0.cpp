#include<bits/stdc++.h>
using namespace std;


// Using map
#include<bits/stdc++.h>
using namespace std;

int pairSum(int *arr, int n) {
    unordered_map<int, int> freq;
    int count = 0;
    for(int i=0; i<n; i++){
        if(freq.find(-1*arr[i]) != freq.end()){
            count = count + freq[-1*arr[i]];
        }
		freq[arr[i]]++; 
    }
    return count;
}

// conventional method
int pairSum(int *arr, int n) {
	sort(arr, arr+n);
    int count= 0;
    for(int i=0; i<n; i++){
        if(arr[i]<=0){
            for(int j=i+1; j<n; j++){
                if(arr[j] == (-1*arr[i]) ){
                       count++;
                }
            }
        }
    }
   return count; 
}