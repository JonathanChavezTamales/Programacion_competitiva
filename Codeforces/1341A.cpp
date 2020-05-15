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
#define debuga(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<*it<<",";} cerr<<endl;
#define debugm(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<it->first<<","<<it->second<<endl;} cerr<<endl;
#define EPS 0.0000001
#define MOD 1000000007
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif

using namespace std;

void solve(){
	int n, a,b,c,d;
	cin>>n>>a>>b>>c>>d;
	long long int mini = (a-b)*n;
	long long int maxi = (a+b)*n;
	long long int upper = c+d;
	long long int lower = c-d;
	debug(mini);
	debug(maxi);
	debug(lower);
	debug(upper);
	if((mini >= lower && mini <= upper) || (maxi >= lower && maxi <= upper) || (mini < lower && maxi > upper)){
		cout<<"Yes"<<endl;
	}
	else cout<<"No"<<endl;
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
