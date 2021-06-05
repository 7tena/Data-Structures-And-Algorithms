#include <iostream>
#include <cstring>
#include <map>
using namespace std;

char nonReapeatingCharacters(string str)
{

    map<char, int> frequency;
    for (int i = 0; i < str.length(); i++)
    {
        frequency[str[i]]++;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (frequency[str[i]] == 1)
        {
            return str[i];
        }
    }
    return str[0];
}

int main()
{
    string str1 = "aabhttr";
    string str2 = "aaabbhhttrr";
    char s1 = nonReapeatingCharacters(str1);
    char s2 = nonReapeatingCharacters(str2);
    cout << s1 << endl << s2;
}