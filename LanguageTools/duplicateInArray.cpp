#include<set>
using namespace std;

int findDuplicate(int *arr, int n)
{
    set<int> s;
    int duplicate;
    for(int i = 0 ; i< n ; i++){
        if(s.find(*(arr + i)) == s.end()){
            s.insert(*(arr + i));
        }
        else
            duplicate = *(arr + i);
    }
    return duplicate;
}