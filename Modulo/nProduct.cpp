#include<bits/stdc++.h>
using namespace std;
long long int mod = 1e9 + 7;

long product(long n){
    if(n == 1)
        return 1;
    return (n*product(n-1))%mod;
} 

int main(){
    int t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        cout << product(n) << endl;
    }
    return 0;
}