#ifdef LOCAL
//////Librerias
#include "libs.h"
//////Debug
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define debuga(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<*it<<",";} cerr<<endl;
#define debugm(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<it->first<<","<<it->second<<endl;} cerr<<endl;
#define debugp(a) cerr<<"("<<a.first<<", "<<a.second<<")"<<endl;
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
	int n;
	cin>>n;
	vector<vector<bool> > m(1000, vector<bool>(1000));
	int maxi = -1;
	forn(i, n){
		int x, y;
		cin>>x>>y;
		maxi = max(maxi, max(x, y));
		m[x-1][y-1] = true;
	}	
	int res = 0;
	for(int i=0; i<maxi; i++){
		int p = 0;
		for(int j=i, k=0; j>=0; j--, k++){
			if(m[j][k]) p ++;
		}
		res += p*(p-1)/2;
	}
	for(int i=maxi-1; i>0; i--){
		int p = 0;
		for(int j=maxi-1, k=maxi-i; k<maxi; j--, k++){
			if(m[j][k]) p++;
		}
		res+= p*(p-1)/2;
	}

	cerr<<" == ="<<endl;

	for(int i=0; i<maxi; i++){
		int p = 0;
		for(int j=0, k=maxi-i-1; j<=i; j++, k++){
			if(m[j][k]) p ++;
		}
		res += p*(p-1)/2;
	}
	for(int i=maxi-1; i>0; i--){
		int p = 0;	
		for(int j=maxi-1, k=i-1; k>=0; j--, k--){
			if(m[j][k]) p ++;
		}
		res+= p*(p-1)/2;
	}


	cout<<res<<endl;
}

int main(){
	optimizar_io;

	solve();
}
