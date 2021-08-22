#include<bits/stdc++.h>
using namespace std;

void replace(string &s, int n, int index){
    if(index == n)
        return ;
    if(s[index] == s[index+1]){
        int i = index;
        while(s[i] != '\0'){
            s[i] = s[i+1];
            i++;
        }
        replace(s,n-1,index);
    }
    replace(s, n, index + 1);
}

int main(){
    string s;
    int t;
    cin >> t;
    for(int i=0 ; i<t ; i++){
        cin>> s;
        int n = s.size();
        replace(s, n, 0);
        cout<< s << endl;
    }
    return 0;
}