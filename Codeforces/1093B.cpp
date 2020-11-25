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
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		map<char, int> mapa;
		for(int i=0; i<s.size(); i++) mapa[s[i]]++;
		if(mapa.size() == 1) cout <<-1<<endl;
		else{
			string ns = "";
			for(auto e : mapa){
				for(int i=0; i<e.second; i++){
					ns += e.first;
				}
			}
			cout<<ns<<endl;
		}
	}
}

int main(){
	optimizar_io;

	solve();
}
