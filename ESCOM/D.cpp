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
#define MODU 1000000007
//////Namespace
using namespace std;

void solve(){
	long long int n;
	cin>>n;
	long long int s =0;
	for(int i=1; i<=n; i++){
		s += i%MODU;
	}
	cout<<s<<endl;
}

int main(){
	optimizar_io;

	solve();
}
