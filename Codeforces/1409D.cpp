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

int calc(string s){
	int c=0;
	for(char x:s){
		c += x-'0';
	}
	return c;
}

void solve(){
	int t;
	cin>>t;
	while(t--){
		string n;
		int s;
		cin>>n>>s;
		long long ncp = stoll(n, nullptr, 10);
		n = "0"+n;
		bool den = false;
	
		for(int i=n.size()-1; i>0; i--){
			debug(n);
			int sum = calc(n);
			if(sum <= s){
				ll cur = stoll(n, nullptr, 10);
				cout<<cur-ncp<<endl;
				den = true;
				break;
			}
			else{
				n[i] = '0';
				n[i-1] += 1;
				for(int j=1; i-j>=0; j++){
					if(n[i-j] == ':'){
						n[i-j] = '0';
						n[i-j-1] += 1;
					}
					else break;
				}
			}	
		}
		if(!den){
			ll cur = stoll(n, nullptr, 10);
			cout<<cur-ncp<<endl;
		}
	}
}

int main(){
	optimizar_io;

	solve();
}
