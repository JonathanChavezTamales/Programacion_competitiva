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

void solve(long long int n){
	cerr<<"solving"<<endl;
	long long int sum =0;
	for(int i=1; i<= sqrt(n) +1 && i<n; i++){
		if(n%i==0) sum++;
	}
	sum++;
	if(sum&1){
		cout<<"yes"<<endl;
	}
	else cout<<"no"<<endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long int t;
	while(true){
		cerr<<"sr"<<endl;
		debug(t);
		cin>>t;
		cerr<<"fr"<<t<<endl;
		if(t) solve(t);
		else return 0;
	}
}
