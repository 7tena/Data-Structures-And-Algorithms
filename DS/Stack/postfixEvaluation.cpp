#include<bits/stdc++.h>
using namespace std;

bool isNumeric(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/')
	    return true;

	return false;
}

bool isOperator(char c){
	if(c >= '0' && c <= '9') return true;
	return false;
}

int evaluate(int op1, char op, int op2){
    if(op == '+') return op1 + op2;
	else if(op == '-') return op1 - op2;
	else if(op == '*') return op1 * op2;
	else if(op == '/') return op1 / op2;
	else cout<<"Unexpected Error \n";
	return -1; 
}

int evaluatePostfix(string e){
    stack<char> S;
    for(int i=0 ; i<e.length(); i++){
        if(e[i] == ' ' || e[i] == ',')      			// if it is a delimiter, continue
            continue;
        else if(isOperator(e[i])){
            int op2 = S.top(); S.pop();     			// pop two operands and perform the operation
            int op1 = S.top(); S.pop();
            int result = evaluate(op1, e[i], op2);
            S.push(result);
        }
        else if(isNumeric(e[i])){ 
			int operand = 0;                            // Extract the numeric operand from the string
			while(i<e.length() && isNumeric(e[i])) {    // Keep incrementing i as long as you are getting a numeric digit. 
				operand = (operand*10) + (e[i] - '0');  // For a number with more than one digits, as we are scanning from left to right. 
				i++;                                    // Everytime , we get a digit towards right, we can multiply current total in operand by 10 
				                                        // and add the new digit.
			}
			i--;                // Finally, you will come out of while loop with i set to a non-numeric character or end of string
			                    // decrement i because it will be incremented in increment section of loop once again. 
			                    // We do not want to skip the non-numeric character by incrementing i twice.  
                                
			S.push(operand);    // Push operand on stack.
        }
    }
	return S.top();				// If expression is in correct format, Stack will finally have one element. This will be the output. 
}

int main() 
{
	string expression; 
	cout<<"Enter Postfix Expression \n";
	getline(cin,expression);
	int result = evaluatePostfix(expression);
	cout<<"Output = "<<result<<"\n";
}

