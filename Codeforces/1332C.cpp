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
	int n, k;
	cin>>n>>k;
	string s;
	cin>>s;
	int mini = 0;
	for(int i=0; i<(k+1)/2; i++){
		mii m;
		debug(i);
		for(int j=0; j<n/k; j++){
			debug(s[j*k + i]);
			debug(s[j*k - i + k -1]);
			m[s[j*k + i]]++;
			m[s[j*k + k - i - 1]]++;
		}
		int maxi = max_element(m.begin(), m.end(),
    [](const pair<int, int>& p1, const pair<int, int>& p2) {
        return p1.second < p2.second; })->se;

		debug(maxi);

		if(k&1 && i==k/2)
			mini += ((2*n)/k-maxi)/2;
		else
			mini += (2*n)/k-maxi;
	}	
	cout<<mini<<endl;
}

int main(){
	optimizar_io;
	int t;
	cin>>t;
	while(t--)
		solve();
}
