// worst case : O(n^2)
// best case : O(n)
// very slow, operates efficiently on smaller data

#include<bits/stdc++.h>
using namespace std;

int* bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int flag = 0;
        for(int j=0 ; j<n-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
    }
    return arr;
}

int main(){
    int n, arr[n];
    cin>> n;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int *p = bubbleSort(arr, n);
    for(int i=0 ; i<n ; i++){
        cout<< *(p+i) << " ";
    }
    return 0;
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
