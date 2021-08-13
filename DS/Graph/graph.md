## Graph
- Used to represent pairwise relationships eg. facebook(social media network - undirected graphs), webpage links
- Web crawling is graph traversal
- If |V|=n, 
    - 0 <= |E| <= n*(n-1), if directed (no self loops and multiple edges)
    - 0 <= |E| <= n*(n-1)/2, if undirected
- Dense: too many edges(n^2) - adjacency matrix(storage)
- Sparse: too few edges(n) - adjacency list
