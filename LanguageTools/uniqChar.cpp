#include<bits/stdc++.h>
#include<string.h>
#include<unordered_set>
using namespace std;

string uniqueChar(string str) {
    unordered_set<char> s;
    string uniqChar;

    for( char ch : str){
        if (s.find(ch) == s.end()){
            uniqChar.push_back(ch);
            s.insert(ch);
        }
    }
    return uniqChar;
}