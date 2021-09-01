#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};
class Solution
{
    public:
    static bool cmp(Item a, Item b){
        double r1 = (double)a.value / (double)a.weight;
        double r2 = (double)b.value / (double)b.weight;
        return r1>r2;
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, struct Item arr[], int n)
    {
        sort(arr, arr + n, cmp);
        int weight = 0;
        double profit = 0.0;
        for(int i=0 ; i<n ; i++){
            if(weight + arr[i].weight < W){
                weight += arr[i].weight;
                profit += arr[i].value;
            }else{
                double left = W - weight;
                profit += arr[i].value
                          * ((double)left
                             / (double)arr[i].weight);
                break;
            }
        }
        return profit;
    }      
};

int main()
{
	int t;
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
		int n, W;
		cin>>n>>W;
		Item arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}