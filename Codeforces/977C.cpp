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

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	int ans = 0;
	cin>>n>>k;
	vector<int> a(n);
	for(int i=0; i<n; i++) cin>>a[i];
	sort(a.begin(), a.end());
	if(k ==0){
		if(a[0] <= 1) cout<<-1<<endl;
		else cout<<a[0]-1<<endl;
		return 0;
	}
	else ans = a[k-1];
	
	int cnt = 0;
	for(int i=0; i<n; i++){
		if(a[i]<=ans) cnt++;
		else break;
	}
	if(cnt != k){
		cout<<-1<<endl;
	}
	else{
		cout<<ans<<endl;
	}
}
