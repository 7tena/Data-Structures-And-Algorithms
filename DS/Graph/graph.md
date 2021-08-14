## Graph
- https://www.geeksforgeeks.org/mathematics-graph-theory-basics-set-1/
- https://www.geeksforgeeks.org/mathematics-walks-trails-paths-cycles-and-circuits-in-graph/
- Used to represent pairwise relationships eg. facebook(social media network - undirected graphs), webpage links
- Web crawling is graph traversal
- If |V|=n, 
    - 0 <= |E| <= n*(n-1), if directed (no self loops and multiple edges)
    - 0 <= |E| <= n*(n-1)/2, if undirected
- Dense: too many edges(n^2) - adjacency matrix(storage)
- Sparse: too few edges(n) - adjacency list

### Representations
- Vertex( O(|V|) ) and Edge list( O(|E|) )
    - SC : O( |V|+|E| )
    - Finding adjacent roots : TC-O(|E|)
    - Connection between nodes : TC-O(|E|)
    - not efficient
- Adjacency matrix
    - symmetric for undirected graphs
    - Finding adjacent roots : TC-O(|V|)
    - Connection between nodes : TC-O(|1|) 
    - Good if graph is dense or (V^2) is too less to matter
    - time efficient but not space efficient
- Adjacency list
    - SC : O(E), E << V^2
    - TC : O(V) - finding adjacent nodes and checking connected components : O(V)
