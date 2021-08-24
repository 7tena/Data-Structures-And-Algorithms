/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
#include<bits/stdc++.h>
using namespace std;

struct Interval {
      int start;
      int end;
      Interval() : start(0), end(0) {}
      Interval(int s, int e) : start(s), end(e) {}
  };

bool cmp(Interval a, Interval b){
    return a.start < b.start;}

vector<Interval> merge(vector<Interval> &A) {
    vector<Interval> interval;
    int n = A.size();
    sort(A.begin(), A.end(), cmp);
    int index=0;
    for(int i=1 ; i<n ; i++){
        if(A[index].end >= A[i].start){
            A[index].end = max(A[index].end, A[i].end);
            A[index].start = min(A[index].start, A[i].start);
        }else{
            index++;
            A[index] = A[i];
        }
    }
    for(int i=0; i<=index; i++){
        interval.push_back(A[i]);
    }
    return interval;
}
