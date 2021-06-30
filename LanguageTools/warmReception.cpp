#include<iostream> 
#include<algorithm> 
using namespace std; 
int findPlatform(int arr[], int dep[], int n) { 
    sort(arr, arr+n); 
    sort(dep, dep+n); 
    int chair_needed = 1, 
    result = 1; 
    int i = 1, 
    j = 0; 
    while (i < n && j < n) { 
        if (arr[i] <= dep[j]) { 
            chair_needed++; 
            i++;
            if (chair_needed > result) 
                result = chair_needed; 
        } else { 
            chair_needed--; 
            j++;
        } 
    } 
    return result; 
} 

int main() { 
    int n; 
    cin>>n; 
    int* arr=new int[n]; 
    int* dep =new int[n]; 
    for(int i=0;i<n;i++) { 
        cin>>arr[i];
    } 
    for(int i=0;i<n;i++) { 
        cin>>dep[i]; 
    } 
    cout<< findPlatform(arr, dep, n); 
    return 0; 
}