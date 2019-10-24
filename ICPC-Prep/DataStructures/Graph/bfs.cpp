#include <iostream>
#include <list>

using namespace std;

class Graph{
	int V;
	list<int> *adj;
	
	public:
		Graph(int V);
		
		void addEdge(int u, int v);

		void bfs(int s);
};

Graph::Graph(int V){
	this->V = V;
	this->adj = new list<int>[V];
}

void Graph::addEdge(int u, int v){
	this->adj[u].push_back(v);
}

void Graph::bfs(int s){
	bool* visited = new bool[this->V];
	for(int i=0; i<this->V; i++){
		visited[i] = false;
	}
	
	list<int> queue;
	queue.push_back(s);
	visited[s] = true;

	while(!queue.empty()){
		s = queue.front();
		queue.pop_front();
		cout<<s<<",";
		for(auto it=this->adj[s].begin(); it!=adj[s].end(); ++it){
			if(!visited[*it]){
				queue.push_back(*it); 
				visited[*it] = true;
			} 
		}
	}
}

int main(){
	Graph g(5);
	g.addEdge(0,1);
	g.addEdge(1,0);
	g.addEdge(1,2);
	g.addEdge(1,3);
	g.addEdge(3,4);
	g.bfs(0);
}
