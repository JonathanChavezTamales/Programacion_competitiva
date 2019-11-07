# Graphs

A graph is a non linear DS that has nodes and edges, they can be directed or undirected, acyclic or cyclic, weighted or not weighted, they can also be multigraphs.

> G = (V, E)

## Representations

There are many ways you can represent a graph (ordered by most used):

* Adjacency matrix
* Adjacency list
* Incidence matrix
* Pair of vertexes
* Two arrays
* Incidence list

### Adjacency matrix

Is a square matrix of size V, where V is the # of vertices of the graph.

Let M[i][j] be an edge from vertex i to vertex j.

Pros: Queries are O(1), removing and adding edges also O(1)

Cons: Memory inefficiency O(n^2) (sparse matrix), when adding a vertex also O(n^2) because tha matrix has to be copied again.

### Adjacency list

Is a vector/array that contains a linked list/set/hashmap of the vertices, if its a weighted graph, it is stored in a pair.

Pros: Saves space O(|V| + |E|), adding vertex is easier.

Cons: Queries like checking an edge between two vertices are not that efficient O(|V|).

## Minimum spanning trees (MST)

A MST is an acyclic graph that connects every vertex and the sum of the edges is minimum.

### Prim's Algorithm

### Kruskal's Algorithm





