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

	int n, m, d;
	cin>>n>>m>>d;
	queue<int, vector<int>> q;
	for(int i=0; i<m; i++){
		int x;
		cin>>x;
		q.push(x);
	}
	vector<int> r(n);
	for(int i=d; i<=n; i++){
		if(q.empty()){
			cout<<"NO"<<endl;
			return;
		}
		else{
			int t = q.front();
			q.pop();
			for(int j=i; j<n && j<i+t){
				
			}
		}
	}
	cout<<"YES"
}
