#ifdef LOCAL
//////Librerias
#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <string>
#include <cmath>
#include <sstream>
#include <climits>
#include <bitset>
#include <numeric>
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
#define endl '\n'
//////Funciones
#define MOD(n,k) ( ( ((n) % (k)) + (k) ) % (k))
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
//////Abreviaciones
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define ll long long
//////Namespace
using namespace std;

void solve(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int imp=0;
		cin>>n;
		vector<int> a(n);
		for(int i=0; i<n; i++){
			cin>>a[i];
			if(a[i]%2!=0) imp++;
		}
		debug(imp);
		debug(n);
		if((n == 1 && a[0]%2==0 )|| (imp==0) || (imp==n && imp%2==0)) cout<<"NO";
		else cout<<"YES";
		cout<<endl;
	}
}

int main(){
	optimizar_io;

	solve();
}
