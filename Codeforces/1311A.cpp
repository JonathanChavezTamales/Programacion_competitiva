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
	long long int a, b;
	cin>>a>>b;
	long long int c = 0;
	if(b-a==0){
		cout<<c<<endl;
	}
	else if((b-a)<0){
		c++;
		if((b-a)%2 != 0){
			c++;
		}
		cout<<c<<endl;
	}
	else{
		c++;
		if((b-a)%2 == 0 ){
			c++;
		}
		cout<<c<<endl;
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
