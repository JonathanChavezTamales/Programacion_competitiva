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
	int n;
	cin>>n;
	if(n ==1){
		int x;
		cin>>x;
		cout<<x<<endl;
		return;
	}
	vector<int> a(n);
	vector<int> r;
	long long int suma = 0;
	cin>>a[0];
	int maxi = a[0];
	bool s = a[0] < 0? false : true;
	for(int i=1; i<n; i++){
		cin>>a[i];
		if(a[i] < 0){
			if(s){ suma+= maxi; r.push_back(maxi); maxi = a[i];}
			s = false;	
		}
		else{
			if(!s){ suma+=maxi; r.push_back(maxi); maxi = a[i];}
			s = true;
		}
		maxi = max(maxi, a[i]);
	}
	suma += maxi;
	r.push_back(maxi);

	cout<<suma<<endl;
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
