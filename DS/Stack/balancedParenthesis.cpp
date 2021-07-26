/*
Algorithm:
- scan from left to right
- if opening symbol present, push it onto the stack
- if closing symbol present, remove last opening symbol
- if stack is empty after scanning, expression is balanced
*/

#include<bits/stdc++.h>
using namespace std;

bool arePair(char opening,char closing)
{
	if(opening == '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;
}

bool isBalanced(string e){
    stack<char> S;
    for(int i=0 ; i<e.length(); i++){
        if(e[i] == '(' || e[i] == '[' || e[i] == '{')
            S.push(e[i]);
        else if(e[i] == ')' || e[i] == '}' || e[i] == ']'){
            if(S.empty() || !arePair(S.top(), e[i]))
                return false;
            else    
                S.pop();
        }
    }
    return S.empty() ? true:false;
}

int main()
{
	string expression;
	cout<<"Enter an expression:  "; 
	cin>>expression;
	if(isBalanced(expression))
		cout<<"Balanced\n";
	else
		cout<<"Not Balanced\n";
}