// https://www.geeksforgeeks.org/topological-sorting/
/* 
Applications:
- Build systems
- Advanced packaging tool(apt-get)
- task scheduling
- pre-requisite problems


Topological Sorting is mainly used for scheduling jobs from the given dependencies among jobs. 
In computer science, applications of this type arise in instruction scheduling, ordering of formula cell evaluation when recomputing 
formula values in spreadsheets, logic synthesis, determining the order of compilation tasks to perform in make files, data serialization, 
and resolving symbol dependencies in linkers 
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    //Function to return list containing vertices in Topological order.

    void topsortI(int n, int V, vector<int> adj[], stack<int> &s, bool visited[])
    {
        visited[n] = true;
        vector<int>::iterator i;
        for (i = adj[n].begin(); i != adj[n].end(); i++)
        {
            if (!visited[*i])
                topsortI(*i, V, adj, s, visited);
        }
        s.push(n);
    }

    vector<int> topoSort(int V, vector<int> adj[])
    {
        vector<int> order;
        stack<int> s;
        bool visited[V] = {false};
        for (int i = 0; i < V; i++)
        {
            if (visited[i] == false)
                topsortI(i, V, adj, s, visited);
        }
        while (s.top())
        {
            order.push_back(s.top());
            s.pop();
        }
        return order;
    }
};

// { Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector<int> &res, vector<int> adj[])
{

    if (V != res.size())
        return 0;

    vector<int> map(V, -1);
    for (int i = 0; i < V; i++)
    {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++)
    {
        for (int v : adj[i])
        {
            if (map[i] > map[v])
                return 0;
        }
    }
    return 1;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++)
        {
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }

    return 0;
} // } Driver Code Ends