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
	vector<int> a(n);
	map<int, int> s;
	for(int i=0; i<n; i++){ cin>>a[i]; s[a[i]]++; }
	cout<<s.size()<<endl;
	vector<int> r;
	for(int i=n-1; i>=0; i--){
		if(s[a[i]] != -1){ r.push_back(a[i]); s[a[i]] = -1; }
	}
	for(int i=r.size()-1; i>=0; i--) cout<<r[i]<<" ";
}
