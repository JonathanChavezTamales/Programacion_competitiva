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

long long int b[300001];

bool dead(vector<long long int> &a){
	for(int i=0; i<a.size(); i++){
		if(a[i]) return false;
	}
	return true;
}

int mod(long long int a, long long int b){
	return (a % b + b) % b;
}

long long int solve(vector<long long int> a, long long int i, long long int csum, long long int minsum){
	csum += a[i];
	//if(csum>minsum) return minsum;
	a[i] = 0;
	int k = (i+1)%a.size();
	while(k!=i){
		if(a[k]==0) break;
		a[k] = a[k]-b[mod(k-1, a.size())];
		if(a[k]>0){
			break;
		}
		else{
			a[k] = 0;
			k = (k+1)%a.size();
		}
	}
	if(csum>minsum) return minsum;
	for(long long int j=0; j<a.size(); j++){
		if(a[j]!=0){
			long long int res = solve(a, j, csum, minsum);
			minsum = min(res, minsum);
		}
	}
	if(dead(a)) return csum;
	return minsum;
}	

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<long long int> a(n);
		for(int i=0; i<n; i++){
			cin>>a[i];
			cin>>b[i];
		}
		long long int minsum =LLONG_MAX;
		for(int i=0; i<n; i++){
			long long int sol = solve(a, i, 0, minsum);
			minsum = min(sol, minsum);
		}
		cout<<minsum<<endl;
	}
}
