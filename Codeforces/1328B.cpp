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

bool equals(double x, double y){
	if(abs(x-y) < EPS) return true;
	return false;
}

void solve(){
	long long int n, k;
	cin>>n>>k;
	string s = "";
	for(int i=0; i<n; i++){
		s+= 'a';
	}

	double fb = (-1 + sqrt(1.0 +  8.0*k)) / 2.0;
	debug(fb);

	if(equals(fb, round(fb))){
		s[n-(int)fb-1] = 'b'; 
	}

	cout<<s<<endl;

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
