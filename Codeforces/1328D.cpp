#ifdef LOCAL
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <deque>
#include <sstream>
#include <cctype>
#include <list>
#include <climits>
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define debug_c(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<*it<<",";} cerr<<endl;
#define EPS 0.0000001
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif

using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i; i<n; i++){
		cin>>a[i];
	}

	bool termino = false;
	int i=0;

	vector<int> c(n, 0);
	c[0] = 1;
	int cont = 1;
	int maxc = 1;
	while(!termino){
		if(a[i] != a[(i+1)%n]){
			c[(i+1)%n] = cont+1;
			cont-=2;
		}
		else{
			c[(i+1)%n] = 1;
			cont = 1;
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
