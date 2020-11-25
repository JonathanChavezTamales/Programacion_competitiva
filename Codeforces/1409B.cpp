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
	int t;
	cin>>t;
	while(t--){
		long long int a, b, x, y, n;
		cin>>a>>b>>x>>y>>n;
		long long int ah = max(x, a-n);
		long long int bh = max(y, b-n);

		if(ah <= bh){
			int nh = n-(a-ah);
			if(nh==0) cout<<ah*b;
			else cout<<ah*max(b-nh, y);
		}
		else{
			int nh = n-(b-bh);
			if(nh == 0) cout<<bh*a;
			else cout<<bh*max(a-nh, x);
		}
		cout<<endl;
	}
}

int main(){
	optimizar_io;

	solve();
}
