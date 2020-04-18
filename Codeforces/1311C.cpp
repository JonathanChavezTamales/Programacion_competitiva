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
	int n, m;
	cin>>n>>m;
	string s;
	cin>>s;
	vector<int>  l(26, 0);
	for(int i=0; i<1; i++){
		int k = s.length();
		for(int j=0; j<k; j++){
			l[s[j]-'a']++;
		}
	}
	for(int i=0; i<m; i++){
		int k;
		cin>>k;
		for(int j=0; j<k; j++){
			l[s[j]-'a']++;
		}
	}
	for(int i=0; i<26; i++){
		cout<<l[i]<<" ";
	}
	cout<<endl;
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
