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
	int a, b,c;
	cin>>a>>b>>c;
	cout<<string(a==0? 0: a+1, '0');
	cout<<string(c==0? 0: c+1, '1');
	if(a==0 && c!=0){
		for(int i=0; i<b; i++){
			if(i&1) cout<<1;
			else cout<<0;
		}
	}
	else if(a!=0 && c==0){
		for(int i=0; i<b; i++){
			if(i&1) cout<<0;
			else cout<<1;
		}
	}
	else if(a!=0 && c!=0){
		for(int i=0; i<b-1; i++){
			if(i&1) cout<<1;
			else cout<<0;
		}
	}
	else{
		for(int i=0; i<b+1; i++){
			if(i&1) cout<<1;
			else cout<<0;
		}
	}
	cout<<endl;
}

int main(){
	optimizar_io;
	int t;
	cin>>t;
	while(t--)
	solve();
}
