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
	int n;
	cin>>n;
	unordered_set<long long int> s;
	vector<long long int> res(n);
	long long int p = 0;
	long long int p2 = 0;
	for(int i=0; i<n; i++){
		long long int x;
		cin>>x;
		s.insert(x);
	}
	for(long long int i : s){
		if(i%3 != 0 && s.find(i*2) == s.end()) p = i;
		if(i%3 != 0 || s.find(i*2) == s.end()) p2 = i;
	}
	p = p == 0? p2:p;
	res[n-1] = p;
	s.erase(p);
	for(int i=n-2; i>=0; i--){
		if(s.find(p*3) != s.end()) p = p*3;
		else if(p%2==0 && s.find(p/2) != s.end()) p = p/2;
		res[i] = p;
		s.erase(p);
	}
	for(long long int i : res) cout<<i<<" ";
	cout<<endl;
}

int main(){
	optimizar_io;

	solve();
}
