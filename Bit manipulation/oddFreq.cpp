#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int T, N, arr[N];
    cin>>T;
    while(T--){
        cin>>N;
        for(int i=0 ; i<N ; i++){
            cin>>arr[i];
        }
        int oddfreq = 0;
        sort(arr, arr+N);
        for(int i=0 ; i<N ; i++){
            oddfreq = oddfreq ^ arr[i];
        }
        cout << oddfreq << endl;
    }
    return 0;
}