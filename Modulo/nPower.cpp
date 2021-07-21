#include<bits/stdc++.h>
using namespace std;
long long int mod = 1e9 + 7;

long power(long x, long y){
    if(y == 0)
        return 1;
    return (x*power(x, y-1))%mod;
} 

int main(){
    int t;
    cin>>t;
    while(t--){
        long x,y;
        cin>>x >> y;
        cout << power(x,y) << endl;
    }
    return 0;
}