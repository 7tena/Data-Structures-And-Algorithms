#include<bits/stdc++.h>
using namespace std;
string reverseWord(string str){
  int l =  str.length();
  for(int i=0; i< l/2; i++){
      char temp = str[i];
      str[i] = str[l-i-1];
      str[l-i-1] = temp;
  }
  return str;
}