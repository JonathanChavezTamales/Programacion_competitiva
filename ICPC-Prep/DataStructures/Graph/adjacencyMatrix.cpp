#include <iostream>
#include <vector>

using namespace std;

class Graph{
	vector< vector<int> > matrix;
	
	public:

	Graph(int n){
		matrix = vector< vector<int> >(n, vector<int>(n, 0));
	}

	//Nodes start at 0
	bool addEdge(int source, int destination, int weight = 1, bool directed = false){
		if(source >= this->matrix.size() || destination >= this->matrix.size()) return false;
		this->matrix[source][destination] = weight;
		if(!directed){
			this->matrix[destination][source] = weight;
		}
		return true;
	}

	void print(){
		for(int i=0; i<this->matrix.size(); i++){
			cout<<"[ ";
			for(int j=0; j<this->matrix.size(); j++){
				cout<<this->matrix[i][j]<<", ";
			}
			cout<<"]"<<endl;
		}
	}
};

int main(){
	Graph* g = new Graph(5);
	g->print();
	cout<<endl;
	g->addEdge(6, 7);
	g->addEdge(1, 2);
	g->addEdge(0, 4, 3, true);
	g->print();
}
