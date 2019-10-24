#include <iostream>
#include <list>

using namespace std;

class Graph{
	int V;
	list<int>* adj;

	public:
		Graph(int v);
		
		void addEdge(int u, int v);

		int connected_components();
};

Graph::Graph(int v){
	this->V = v;
	this->adj = new list<int>[v];
}

//Undirected graph
void Graph::addEdge(int u, int v){
	this->adj[u].push_back(v);
	this->adj[v].push_back(u);
}

int Graph::connected_components(){
	//we do a bfs, then check if there are remaining unvisited nodes, if true, add 1 to the count, then start bfs again with the next unvisited node
	
	bool* visited = new bool[this->V];
	for(int i=0; i<this->V; i++){
		visited[i] = false;
	}

	int count = 0;
	
	for(int i=0; i<this->V; i++){
		if(visited[i] == false){
			count++;
			visited[i] = true;
			list<int> queue;
			queue.push_back(i);
				
			while(!queue.empty()){
				int current = queue.front();
				queue.pop_front();


				for(list<int>::iterator it=adj[current].begin(); it!=adj[current].end(); ++it){
					if(!visited[*it]){
						visited[*it] = true;
						queue.push_back(*it);
					}
				}
			}
		}
	}

	return count;
	
}


int main(){
	Graph g(5);
	g.addEdge(0,1);
	g.addEdge(1,0);
	g.addEdge(1,2);
	g.addEdge(3,4);
	cout<<endl<<"comps: "<<g.connected_components();
}
