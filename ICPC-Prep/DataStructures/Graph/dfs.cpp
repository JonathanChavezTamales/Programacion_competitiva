#include <iostream>
#include <list>

using namespace std;

class Graph{
	int V;
	list<int>* adj;
	
	public:
		Graph(int V);

		void addEdge(int u, int v);

		void dfs(int s);
};

Graph::Graph(int v){
	this->V = v;
	this->adj = new list<int>[V];
}

void Graph::addEdge(int u, int v){
	this->adj[u].push_back(v);
}

void Graph::dfs(int s){
	bool* visited = new bool[this->V];
	for(int i=0; i<this->V; i++){
		visited[i] = false;
	}
	visited[s] = true;
	list<int> mystack;
	mystack.push_front(s);
	while(!mystack.empty()){
		int current = mystack.front();
		mystack.pop_front();
		cout<<current<<",";
		for(list<int>::iterator it = this->adj[current].begin(); it!=this->adj[current].end(); ++it){
			if(!visited[*it]){
				visited[*it] = true;
				mystack.push_front(*it);
			}
		}
	}

}

int main(){
	Graph g(9);
	g.addEdge(1,2);
	g.addEdge(2,6);
	g.addEdge(2,5);
	g.addEdge(1,3);
	g.addEdge(1,4);
	g.addEdge(4,7);
	g.addEdge(5,3);
	g.addEdge(7,8);
	g.addEdge(8,7);
	g.addEdge(8,5);
	g.addEdge(3,8);
	g.dfs(1);
}
