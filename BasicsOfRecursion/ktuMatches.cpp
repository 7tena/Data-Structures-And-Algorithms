#include <iostream>
#include<cstdio>
using namespace std;

 int matchcount(int m){
	 int count = 0;
	 if(m == 1){
		return count;
	 }
	 else{
		if(m%2==0){
			return (m/2 + matchcount(m/2));
		}
		else{
			return ((m+1)/2 + matchcount(m/2));
		}
	 } 	
 }

 int main(){
	int n,m[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m[i];
	}
	for(int i=0; i< n ;i++){
		int count = matchcount(m[i]);
		cout<< count << endl;
	}
 }