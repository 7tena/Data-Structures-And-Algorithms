#include <iostream>
#include <stdio.h>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

// O(n)
// Using vector and set
vector<int> removeDuplicates(vector<int> input)
{
    set<int> s;
    vector<int> result;
    for (int i = 0; i < input.size(); i++)
    {
        if (s.find(input[i]) == s.end())
        {
            s.insert(input[i]);
            result.push_back(input[i]);
        }
    }
    return result;
}

// using sorting
vector<int> removeDuplicates1(vector<int> input)
{
    sort(input.begin(), input.end());
    vector<int> result;
    vector<int>::iterator i;
    result.push_back(input[0]);
    for (int i = 1; i < input.size(); i++)
    {
        if (input[i] != input[i - 1])
        {
            result.push_back(input[i]);
        }
    }
    return result;
}

// Driver function
int main()
{
    vector<int> input = {1, 4, 5, 6, 3, 2, 2};
    vector<int> result;
    // result = removeDuplicates(input);
    result = removeDuplicates1(input);
    vector<int>::iterator j;
    for (j = result.begin(); j < result.end(); j++)
    {
        std::cout << *j << endl;
    }
    return 0;
}