#include<bits/stdc++.h>
using namespace std;

void removeX(char* str, char x){
    if(str[0] == '\0')
        return;
    if(str[0] != x){
        removeX(str+1, x);
    }else{
        int i=1;
        for(; str[i] != '\0' ; i++){
            str[i-1] = str[i];
        }
        str[i-1] = str[i];
        removeX(str,x);
    }
}