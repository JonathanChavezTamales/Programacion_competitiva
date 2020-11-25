#ifdef LOCAL
//////Librerias
#include "libs.h"
//////Debug
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define debuga(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<*it<<",";} cerr<<endl;
#define debugm(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<it->first<<","<<it->second<<endl;} cerr<<endl;
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debuga(a) 42
#define debugm(a) 42
#endif
//////Constantes
#define EPS 0.0000001
#define CHP 1000000007
#define endl '\n'
//////Funciones
#define MOD(n,k) ( ( ((n) % (k)) + (k) ) % (k))
#define forn(i,n) for (int i = 0; i < n; i++)
#define forr(i,a,b) for (int i = a; i <= b; i++)
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
//////Abreviaciones
#define pb push_back
#define fi first
#define se second
#define mp make_pair
//////Namespace
using namespace std;
//////Typedefs
typedef long long ll;
typedef pair<int, int> ii;
typedef map<int, int> mii;
typedef vector<ll> vi;


void solve(){
	int n, m;
	cin>>n>>m;
	vector<vector<int> > adj(n+1);
	for(int i=1; i<=m; i++){
		int a, b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	vector<bool> visited(n+1, false);
	queue<int> q;
	
	int res = 0;
	for(int i=1; i<=n; i++){
		if(!visited[i]){
			q.push(i);
			bool fl = false;
			while(!q.empty()){
				int curr = q.front();
				if(adj[curr].size() != 2) fl = true;
				q.pop();
				visited[curr] = true;
				for(int el : adj[curr]){
					if(!visited[el]) q.push(el); visited[el] = true;
				}
			}
			if(!fl) res++;
		}
	}
	cout<<res<<endl;
	
}

int main(){
	optimizar_io;

	solve();
}
