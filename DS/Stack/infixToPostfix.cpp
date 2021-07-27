#include<bits/stdc++.h>
using namespace std;

int prec(char c){
    if(c == '^') return 3;
    else if(c == '*' || c == '/') return 2;
    else if(c == '+' || c == '-') return 1;
    else return -1;
}

bool isOperator(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/')
	    return true;

	return false;
}

bool isOperand(char c){
	if(c >= '0' && c <= '9') return true;	
	if(c >= 'a' && c <= 'z') return true;
	if(c >= 'A' && c <= 'Z') return true;
	return false;
}

string infixToPostfix(string e){
    stack<char> s;
    string res;
    for(int i=0; i<e.length() ; i++){
        if(isOperand(e[i])){			// If operand, add it to output string.
			res += e[i];
		}else if(e[i] == '('){			// If ‘(‘, push it to the stack.
			s.push(e[i]);
		}else if(e[i] == ')'){			// If ‘)’, pop and add it to the output string until an ‘(‘ is encountered.
			while(s.top() != '('){
				res += e[i];
				s.pop();
			}
			s.pop();
		}else{							// If operator, look for precedence and swap if it is lesser than top of stack
			while( !s.empty() && ( prec(e[i]) <= prec(s.top()))){
				res += s.top();
				s.pop();
			}
			s.push(e[i]);
		}
    }
	while(!s.empty()){					// Pop all the remaining elements from the stack
		res += s.top();
		s.pop();
	}
	return res;
}

int main() 
{
	string expression; 
	cout<<"Enter Infix Expression \n";
	getline(cin,expression);
	string postfix = infixToPostfix(expression);
	cout<<"Output = "<<postfix<<"\n";
}