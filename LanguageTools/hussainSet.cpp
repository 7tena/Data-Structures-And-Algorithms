#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, m; 
    cin>> n >> m;
    ll ar[n];
    for(int i=0; i<n; i++){
        cin>> ar[i];
    }
    sort(ar, ar+n);
    int countm = 0;
    int endp = n-1;
    queue<ll> q;
    while(m--){
        int currm;
        cin>> currm;
        ll ans;
        for(; countm < currm; countm++){
            if( (endp >= 0) && ( (q.empty()) || (ar[endp] > q.front()))){
                ans = ar[endp];
                endp--;
            }
            else{
                ans = q.front();
                q.pop();
            } 
            q.push(ans/2);
        }
        cout << ans << endl;
    }
    return 0;
}