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
vector<vector<char> > m(4, vector<char>(4));

int cuadros(int i, int j){
	int  score = 0;
	if(i > 2 || j > 2) return -1;
	for(int x =0 ; x<2; x++){
		for(int y=0; y<2; y++){
			if(m[i+x][j+y] == '.') score--;
			else score++;
		}
	}
	debug(score);
	return score;
}

void solve(){
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cin>>m[i][j];
		}
	}
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			int s = cuadros(i, j);
			if(abs(s) == 2 || abs(s) == 4){
				cout<<"YES"<<endl;
				return;
			}
		}
	}
	cout<<"NO"<<endl;
}

int main(){
	optimizar_io;

	solve();
}
