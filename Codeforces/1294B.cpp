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

bool comp(pair<int, int> a, pair<int, int> b){
	if(a.first <= b.first){
		if(a.second <= b.second) return true;
	}
	return false;
}

void solve(){
	int n;
	cin>>n;
	vector<pair<int, int> > a(n+1);
	a[0] = make_pair(0,0);
	for(int i=0; i<n; i++){
		int x, y;
		cin>>x>>y;
		a[i+1] = make_pair(x,y);
	}
	sort(a.begin(), a.end(), comp);

	string s = "";
	bool pos = true;
	for(int i=1; i<n+1; i++){
		if(a[i].second >= a[i-1].second && a[i].first>=a[i-1].first){
			int r = a[i].first-a[i-1].first;
			int u = a[i].second-a[i-1].second;
			for(int j=0; j<r; j++) s+= 'R';
			for(int j=0; j<u; j++) s+= 'U'; 
		} else{
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl<<s<<endl;
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
