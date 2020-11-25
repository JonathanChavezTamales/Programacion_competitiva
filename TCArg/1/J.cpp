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
	long long int n, d, a, b;
	cin>>n>>d>>a>>b;
	vector<pair<long long int, int> > v(n);
	for(int i=0; i<n; i++){
		long long int x, y;
		cin>>x>>y;
		long long int r = a*x+b*y;
		v[i] = make_pair(r, i+1);
	}
	sort(v.begin(), v.end());
	long long int sm = 0;
	vector<long long int> res;
	for(auto it=v.begin(); it!=v.end(); ++it){
		sm += it->first;
		if(sm <= d) res.push_back(it->second); 
		else break;
	}
	cout<<res.size()<<endl;
	for(int i=0; i<res.size(); i++){
		cout<<res[i]<<" ";
	}
	cout<<endl;
}

int main(){
	optimizar_io;

	solve();
}
