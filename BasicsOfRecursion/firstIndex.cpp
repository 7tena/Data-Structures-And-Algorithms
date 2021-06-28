#include<iostream>
using namespace std;

int firstIndex(int a[], int size, int x) {
	if(size==0)
        return -1;
    if(a[0]==x)
        return 0;
    else{
        int pos= firstIndex(a+1,size-1,x);
        if (pos<0)
            return-1;
        return pos+1;
        }
}

 int main(){
     int n, i=0, arr[n], num;
     cin>>n;
     while(n--){
         cin>>arr[i++];
     }
    firstIndex(arr, n, num);
     return 0;
 }