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
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		map<int, int> m;
		for(int i=0; i<n; i++){
			int x;
			cin>>x;
			m[x]++;
		}
		int mode = max_element(m.begin(), m.end(),
    [](const pair<int, int>& p1, const pair<int, int>& p2) {
        return p1.second < p2.second; })->second;

		int res = m.size()-1;
		debug(mode);
		debug(res);
		if(mode==res){
			cout<<mode<<endl;
		}
		else if(mode > res+1){
			cout<<min(mode, res+1)<<endl;
		}
		else{
			cout<<min(mode, res)<<endl;
		}
	}
}
