#include<bits/stdc++.h>
using namespace std;

bool hasPath(int** e, int n, int sv, int ev, bool* v){
    if(e[sv][ev] == 1)
        return true;
    v[sv] = 1;
    for(int i = 0; i<n ; i++){
        if(e[sv][i]==1 && !v[i]){
        	bool val = hasPath(e, n, i, ev, v);
            if(val){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int e, n, t, sv, ev;
    cin>> t;
    for(int k = 0; k<t; k++){
     	cin >> n >> e;
    	int** edges = new int*[n];
    	for(int i=0 ; i<n ; i++){
    	    edges[i] = new int[n];
    	    for(int j=0 ; j<n ; j++){
    	        edges[i][j] = 0;
    	    }
    	}
    	for(int i=0 ; i<e ; i++){
    	    int f, s;
    	    cin >> f >> s;
    	    edges[f][s] = 1;
    	    edges[s][f] = 1;
    	}
        cin >> sv >> ev;
        bool* visited = new bool[n];
    	for(int i= 0; i<n ; i++){
        	visited[i] = false;
    	}
    	bool ans = hasPath(edges, n, sv, ev, visited);
        if(ans)
            cout<<"true" << endl;
        else
            cout<<"false"<<endl;
    }
}