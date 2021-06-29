#include<map>
using namespace std;

// using XOR
int findUnique(int *arr, int n) {
    int sum;
   for(int i=0; i<n; i++){
       sum = sum ^ arr[i];
   }
    return sum;
}


// conventional method
int findUnique(int *arr, int n) {
    map<int, int> freq;
    for(int i=0; i<n ; i++){
        if(freq[arr[i]]<2)
        	break;
        else
            freq[arr[i]]++;
    }
    map<int, int>::iterator i;
    for(i=freq.begin(); i!=freq.end(); i++){
        if(i->second == 1){
            return i->first;
            break;
        }
    }
}