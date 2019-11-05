#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <sstream>
#include <cctype>

#ifdef LOCAL
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define debug_c(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<*it<<",";} cerr<<endl;
#else
#define debug(x) 42
#define debug_c(a) 42
#endif

using namespace std;



bool cyclic(int root, vector<int> adj[], vector<bool> &visited){
	int next = -1;
	list<int> q;
	q.push_back(root);
	int count = 0;
	while(!q.empty()){
		int sum = 0;
		int current = q.front();
		visited[current] = true;
		count++;
		for(int i=0; i<adj[current].size(); i++){
			int child = adj[current][i];
			if(!visited[child]){
				sum++;
				next = child;
			}
		}
		if(sum!=2 && current == root){
			return false;
		}
		else if(sum == 0 && count > 2){
			if(find(adj[current].begin(), adj[current].end(), root) != adj[current].end()) return true;
			return false;
		}

		else if(sum != 1 && current != root){
			return false;
		}
				q.pop_front();
		q.push_back(next);
	}
	return false;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin>>n>>m;
	vector<bool> visited(n+2, false);
	vector<int> adj[n+2];
	for(int i=0; i<m; i++){
		int u, v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	
	int res = 0;
	for(int i=1; i<=n; i++){
		if(!visited[i]){
			if(cyclic(i, adj, visited)) res++;
		}
	}
	cout<<res<<endl;

}
