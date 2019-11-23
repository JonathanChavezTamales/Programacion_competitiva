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
		int n,m;
		cin>>n>>m;
		vector<int> arr(n);
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		
		if(n==2){
			cout<<-1<<endl;
			break;
		}
		vector<pair<int, int> > p;
		
		int cost = 0;
		vector<int> ordered(arr);
		sort(ordered.begin(), ordered.end());
		int idx0 = find(arr.begin(), arr.end(), ordered[0])-arr.begin();
		int idx1 = find(arr.begin(), arr.end(), ordered[1])-arr.begin();
		int idx2 = find(arr.begin(), arr.end(), ordered[2])-arr.begin();
		int edges = 0;
		unordered_map<int, vector<int>> mp;
		for(int i=0; i<n; i++){
			//Una conexion
			if(i==idx0){
				mp[arr[i]].push_back(idx1);
				mp[arr[i]].push_back(idx2);

			}
			else if(i==idx1){
				mp[arr[i]].push_back(idx0);
				mp[arr[i]].push_back(idx2);
			}
			else{
				mp[arr[i]].push_back(idx0);
				mp[arr[i]].push_back(idx1);
			}
			cost += arr[i]*2;
			edges++;
		}
vector<pair<int, int> > ps2;
		if(edges > m){
			cout<<-1<<endl;
			break;
		}
		
		else if(edges < m){
			for(int i=edges; i<m; i++){
				mp[arr[idx0]].push_back(idx1);
				mp[arr[idx1]].push_back(idx0);
				ps2.push_back(make_pair(idx1, idx2));
			}
			cost += (arr[idx0]+arr[idx1])*(m-edges);
		}
		cout<<cost<<endl;
		set< pair<int, int> > ps;
		for(auto it=mp.begin(); it!=mp.end(); ++it){
			cerr<<"s"<<endl;
			for(int i=0; i<(it->second).size(); i++){
				cerr<<i<<endl;
				cout<<it->first<<(it->second)[i]<<endl;
			}		
		}
		
	}
}
