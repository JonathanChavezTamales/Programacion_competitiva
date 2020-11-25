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
	string s;
	cin>>s;
	for(int i=0; i<s.size(); i++){
		switch(toupper(s[i])){
			case 'O': 
				s[i] = '0';
				break;
			case 'I':
				s[i] = '1';
				break;
			case 'Z': 
				s[i] = '2';
				break;
			case 'E':
				s[i] = '3';
				break;
			case 'A': 
				s[i] = '4';
				break;
			case 'S':
				s[i] = '5';
				break;
			case 'G': 
				s[i] = '6';
				break;
			case 'T':
				s[i] = '7';
				break;
			case 'B': 
				s[i] = '8';
				break;	
		}
	}
	cout<<s<<endl;
}

int main(){
	optimizar_io;

	solve();
}
