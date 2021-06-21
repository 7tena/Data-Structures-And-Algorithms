#include <iostream> 
#include <sstream> 
#include <string> 
#include <unordered_map> 
using namespace std; 
int main() { 
    string str; 
    getline(cin, str); 
    unordered_map<string, int> freq; 
    istringstream stream(str); 
    do { 
        string word; 
        stream >> word; 
        ++freq[word]; 
        } while (stream); 
    bool isNamePrinted = false; 
    for (auto pair : freq) { 
        if (pair.second > 1) { 
            isNamePrinted = true; 
            cout << pair.first << " " << pair.second << "\n"; 
        } 
    } 
    if (!isNamePrinted) { 
        cout << -1; 
    } 
}