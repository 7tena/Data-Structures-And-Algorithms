#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int sum(ll n){
    int d;
    if(n<10 and n>=0)
        return n;
    else{
        d= n%10;
        return d + sum(n/10);
    }
}
int main() {
	int n, s;
    ll no;
    cin>>n;
    for(int i=0; i<n; i++){
		cin>>no;
		s = sum(no);
        cout<<s<<endl;
    }
}