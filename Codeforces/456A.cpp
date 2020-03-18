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
	map<int, int> m;
	for(int i=0; i<n; i++){
		int a, b;
		cin>>a>>b;
		m[a] = b;
	}
	int last = 0;
	for(auto it=m.begin(); it!=m.end(); ++it){
		if(last > it->second){
			cout<<"Happy Alex"<<endl;
			return 0;
		}
		last = it->second;
	}
	cout<<"Poor Alex"<<endl;
}
