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


void solve(){
	int n, D;
	cin>>n>>D;
	vector<ii> p(n);
	forn(i, n){
		int a, b;
		cin>>a>>b;
		p[i] = mp(a,b);
	}

	sort(p.begin(), p.end());
	ll maxi = 0;
	ll sumi = 0;
	for(int i=0, j=0; i<n && j<n; j++){
		debug(p[j].fi);
		debug(p[i].fi);
		if(p[j].fi - p[i].fi < D){
			sumi+=p[j].se;
			maxi = max(maxi, sumi);		
		}
		else{
			cerr<<"se chinga en";
			debug(i);
			debug(j);
			i++;
			j=i-1;
			sumi = 0;
		}
	}
	cout<<maxi<<endl;
}


int main(){
	optimizar_io;

	solve();
}
