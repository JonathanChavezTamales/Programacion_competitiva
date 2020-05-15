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
#define debug_c(a) 42
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

bool nor(int x, int max){
	if(x<1) return false;
	if(x>max) return false;
	return true;
}

void finddfs(vector<vector<int> > &g){
	for(int k=1; k<g.size(); k++){
		stack<int> stk;
		vector<bool> visited(g.size());
		stk.push(k);
		vector<int> res;
		bool pos = true;
		while(!stk.empty()){
			int c = stk.top();
			stk.pop();
			if(!visited[c]){
				res.push_back(c);
				if(res.size() >= 2 && abs(res[res.size()-2]-c) < 2){
					pos = false;
					break;	
				}
				visited[c] = true;	
				for(int i=g[c].size()-1; i>=0; i--){
					if(!visited[g[c][i]]){
						stk.push(g[c][i]);
					}
				}
			}
		}
		if(g.size()-1 == res.size() && pos){
			for(int i=0; i<res.size(); i++){
				cout<<res[i]<<" ";
			}
			cout<<endl;
			return;	
		}	
	}
	cout<<-1<<endl;
}

void solve(){
	int n;
	cin>>n;
	vector<vector<int> > a(n+1);
	for(int i=1; i<=n; i++){
		for(int j=-4; j<=4; j++){
			if(nor(i+j, n) && (j>=2 || j<=-2)){
				a[i].push_back(i+j);
			}
		}
	}

	finddfs(a);
}

int main(){
	optimizar_io;
	int t;
	cin>>t;
	while(t--)
	solve();
}
