#include<bits/stdc++.h>
using namespace std;

void replace(string &s, int n, int index, char c1, char c2){
    if(index == n)
        return ;
    if(s[index] == c1){
        s[index] = c2;
    }
    replace(s, n, index+1 , c1, c2);
}

int main(){
    string s;
    char c1, c2;
    int t;
    cin >> t;
    for(int i=0 ; i<t ; i++){
        cin>> s;
        cin>> c1 >> c2;
        int n = s.size();
        replace(s, n, 0, c1,c2);
        cout<< s << endl;
    }
    return 0;
}