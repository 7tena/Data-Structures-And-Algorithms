#include<bits/stdc++.h>
using namespace std;

void printBFS(int** e, int sv, int n, bool* v){
    queue<int> q;
    q.push(sv);
    v[sv] = true;
    while(!q.empty()){
        cout<< q.front() << " ";
        int currentvertex = q.front();
        q.pop();
        for(int i=0; i<n; i++){
            if(i == currentvertex)
                continue;
            if(e[currentvertex][i] == 1 && !v[i]){
                q.push(i);
                v[i] = true;
            }
        }
    }
}

void BFS(int** e, int n){
    bool* visited = new bool[n];
    for(int i= 0; i<n ; i++){
        visited[i] = false;
    }
    for(int i=0 ; i<n ; i++){
        if(!visited[i])
            printBFS(e, i, n, visited);
    }
}

int main(){
    int e, n;
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
    BFS(edges, n);
    return 0;
}