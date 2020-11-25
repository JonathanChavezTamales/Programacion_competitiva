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
	map<int, long long int> mins;
	unordered_map<long long int, vector<long long int> > adj;
	int n, k;
	cin>>n>>k;
	vector<long long int> a(n+1);
	for(int i=0; i<n; i++){
		int x; cin>>x;
		mins[x]++;	
		a[i+1] = x;
	}
	for(int i=0; i<k; i++){
		int x, y;
		cin>>x>>y;
		adj[x].push_back(a[y]);
		adj[y].push_back(a[x]);
	}
	long long int ac = 0;
	for(auto e:mins){
		mins[e.first] = ac;
		ac += e.second;
	}
	long long int total = 0;
	for(int i=1; i<=n; i++){
		int tot = mins[a[i]];
		sort(adj[i].begin(), adj[i].end());

		auto lb = lower_bound(adj[i].begin(), adj[i].end(), a[i]);
		int diff = lb-adj[i].begin();
		diff = diff >= adj[i].size()? adj[i].size() : diff;
			
		cout<<tot-diff<<" ";
	}
	cout<<endl;
}

int main(){
	optimizar_io;

	solve();
}
