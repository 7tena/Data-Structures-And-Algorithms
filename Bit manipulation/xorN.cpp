#include<bits/stdc++.h>
using namespace std;
int main(){
    int T, N;
    cin>>T;
    while(T--){
		cin>>N; 
        int xorN;
        if(N%4 == 0)
            xorN = N;
        else if(N%4 == 1)
            xorN = 1;
        else if(N%4 == 2)
            xorN = N+1;
        else
            xorN = 0;
    	cout << xorN << endl;  
	}
    return 0; 
}