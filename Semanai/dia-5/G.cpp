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
#include <sstream>
#include <cctype>

//Hacer ifdef para solo declarar debug en local y hacer otro debug de string


#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define debug_c(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<*it<<",";} cerr<<endl;
#define FOR(i,f,t) for(int i=f; i<(int)t; ++i)


using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin>>n>>m;
	vector<long int> adj[n+1];
	vector<long int> c(n+1, 0);
	for(int i=1; i<n+1; i++) cin>>c[i];
	for(int i=0; i<m; i++){
		long int a,b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	vector<bool> visited(n+1, false);
	long long int sum = 0;

	for(int i=0; i<n+1; i++){
		if(!visited[i]){
			visited[i] = true;
			queue<int> q;
			q.push(i);
			long int mini = INT_MAX;
			
			while(!q.empty()){
				long long int d = q.front();
				q.pop();
				mini = c[d] < mini ? c[d] : mini;
				for(int j=0; j<adj[d].size(); j++){
					if(!visited[adj[d][j]]){
						q.push(adj[d][j]);
						visited[adj[d][j]] = true;
					}
				}
			}
			sum+=mini;
		}
	}

	cout<<sum<<endl;
}
