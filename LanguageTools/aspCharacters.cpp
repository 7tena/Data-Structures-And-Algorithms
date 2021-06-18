#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int ca = 0, cp = 0, cs = 0 ;
    char s[100000];
    cin >> n;
    cin >> s;
    for(int i = 0 ; i < n ; i++){
        // if(s[i] == 'a')
        //     ca++;
        // else if(s[i] == 'p')
        //     cp++;
        // else if(s[i] == 's')
        //     cs++;
        ca = ( s[i] == 'a')? ca + 1 : ca + 0 ;
        cp = ( s[i] == 'p')? cp + 1 : cp + 0 ;
        cs = ( s[i] == 's')? cs + 1 : cs + 0 ;
       
    }
    cout << ca << " " << cs << " " << cp<< " " ;
	return 0;
}