#include<bits/stdc++.h>
using namespace std;

int length(char* str){
    if(str[0] == '\0')
        return 0;
    return 1+length(str+1);
}