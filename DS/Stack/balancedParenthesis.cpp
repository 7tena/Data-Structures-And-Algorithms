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

//second approach
#include <iostream>
#include <string>
using namespace std;

bool isBalanced(const string &expression) {
    int roundOpen = 0;   // Counter for '(' and ')'
    int curlyOpen = 0;   // Counter for '{' and '}'
    int squareOpen = 0;  // Counter for '[' and ']'

    for (char ch : expression) {
        switch (ch) {
            case '(':
                roundOpen++;
                break;
            case ')':
                if (roundOpen == 0) return false;  // Unmatched closing parenthesis
                roundOpen--;
                break;
            case '{':
                curlyOpen++;
                break;
            case '}':
                if (curlyOpen == 0) return false;  // Unmatched closing curly brace
                curlyOpen--;
                break;
            case '[':
                squareOpen++;
                break;
            case ']':
                if (squareOpen == 0) return false;  // Unmatched closing square bracket
                squareOpen--;
                break;
            default:
                // Ignore non-bracket characters if any (not expected per problem constraints)
                break;
        }
    }
    // Check if all counters are zero
    return roundOpen == 0 && curlyOpen == 0 && squareOpen == 0;
}

int main() {
    string expression;
    cout << "Enter an expression: ";
    cin >> expression;

    if (isBalanced(expression)) {
        cout << "Balanced\n";
    } else {
        cout << "Not Balanced\n";
    }

    return 0;
}
