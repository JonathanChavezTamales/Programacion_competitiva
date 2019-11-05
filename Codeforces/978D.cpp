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
	vector<long int> diffs(n-1);
	long int t;
	cin>>t;
	long int last = t;
	map<long int, int> g;
	if(n > 1){
		for(int i=1; i<n; i++){
			long int x;
			cin>>x;
			diffs[i-1] = last-x;
			last = x;
			debug(diffs[i-1]);
			for(int j=diffs[i-1]-2; j<=diffs[i-1]+2; j++){
				debug(j);
				g[j]++;
			}
		}

		for(auto it=g.begin(); it!=g.end(); ++it){
			cerr<<"("<<it->first<<","<<it->second<<")"<<endl;
		}

	}
	else{
		cout<<0<<endl;
	}
}
