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
#define debuga(a) 42
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
	int n;
	cin>>n;
	vector<vector<int> > list(n);
	for(int i=0; i<n; i++){
		string ss;
		cin>>ss;
		for(int j=0; j<ss.size(); j++){
			list[i].push_back(ss[j]);
		}
		sort(list[i].begin(), list[i].end(), greater<int>());
	}
	vector<string> pegs(n);
	for(int i=0; i<n; i++){
		string l = "";
		for(int j=0; j<list[i].size(); j++){
			l+=(char)list[i][j];
		}
		pegs[i] = l;
	}
	sort(pegs.begin(), pegs.end(), [](const string& s1, const string& s2){
		long long int ms = min(s1.size(), s2.size());
		for(long long int i=0; i<ms; i++){
			if(s1[i]<s2[i]) return false;
			else if(s1[i]>s2[i]) return true;
		}
		return false;
			});
	for(int i=0; i<n; i++){
		cout<<pegs[i];
	}
	cout<<endl;
}

int main(){
	optimizar_io;

	solve();
}
