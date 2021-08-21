#include <bits/stdc++.h>
using namespace std;

// recursion
void printDFS(int** e, int sv, int n, bool* v){
    cout << sv << endl;
    v[sv] = 1;
    for(int i = 0; i<n ; i++){
        if(i==sv){  // check if vertex is equal
            continue;
        }
        if(e[sv][i]==1){
            if(v[i]){ // check if already visited
                continue;
            }
        printDFS(e, n, i, v);
        }
    }
}

void DFS(int** e, int n){
    bool* visited = new bool[n];
    for(int i= 0; i<n ; i++){
        visited[i] = false;
    }
    for(int i=0 ; i<n ; i++){
        if(!visited[i])
            printDFS(e, i, n, visited);
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
    bool* visited = new bool[n];
    DFS(edges, n);
}