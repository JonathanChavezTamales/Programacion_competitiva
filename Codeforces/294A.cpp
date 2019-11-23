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

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	vector<int> a(n+1);
	for(int i=1; i<n+1; i++){
		cin>>a[i];
	}
	int m;
	cin>>m;
	while(m--){
		int x, y;
		cin>>x>>y;
		debug(a[x]);
		if(x-1 > 0) {
			a[x-1] += y-1;
		}
		if(x+1 < n+1 ){
			a[x+1] += a[x]-y;
		}
		debug(a[x-1]);
		debug(a[x+1]);
		a[x] = 0;
	}
	for(int i=1; i<n+1; i++){
		cout<<a[i]<<endl;
	}
}
