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
	if(n%4 == 0){
		cout<<"YES"<<endl;
		for(int i=0; i<n; i+=2){
			cout<<i+2<<" ";
		}
		for(int i=0; i<n-2; i+=2){
			cout<<i+1<<" ";
		}
		cout<<n+n/2-1<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
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
