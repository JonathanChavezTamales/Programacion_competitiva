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

bool divisors(long long int l, long long int r, long long int x){
	for(int i=l; i<=r; i++){ 
		if(x%i == 0) return true;
	}
	return false;
}

void solve(){
	int t;
	cin>>t;
	while(t--){
		int a, b;
		cin>>a>>b;
		map<int, int> divs;
		for(int i=a; i<=b; i++){
			for(int j=1; j<=i; j++){
				if(i%j!=0) divs[j]++;
			}
		}
		bool fl = false;
		for(auto it:divs){
			if(it.second == b-a+1){
				fl = true;
				break;
			}
		}
		if(b+1 <= 2*a-1 || fl) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

int main(){
	optimizar_io;
	
	solve();
}
