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
#include <climits>
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define debug_c(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<*it<<",";} cerr<<endl;
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif

using namespace std;

bool comparer(const pair<string,int> &a, const pair<string, int> &b){
	return a.second < b.second;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	string s;
	cin>>s;
	map<string, int> m;
	for(int i=0; i<n-1; i++){
		m[s.substr(i,2)]++;
	}
	cout<<max_element(m.begin(), m.end(), comparer)->first<<endl;
}
