#include<bits/stdc++.h>
using namespace std;

class Solution{   
public:
    long long minEnergy(int N, int P, vector<int> ener, vector<vector<int>> friends){
        int sum, count;
        unordered_map<int, int> freq;        
        if(P == 0){
            sum = 0;
            for(int i=0 ; i<N ; i++){
                sum = sum + ener[i];
            }
        } else{
            for(int i=0; i<P ; i++){
                freq[friends[i][0]]++;
                freq[friends[i][1]]++;
            }
            unordered_map<int, int>::iterator i;
            count = 0;
            for(i = freq.begin(); i!=freq.end(); i++){
                if((i-> second) > 1){
                    count = count + i->second;
                }
            }
            sum = 0;
            int length = N-count;
            for(int i=0 ; i<length ; i++){
                sum = sum + ener[i];
            }
        }
        return sum;
    }
};