#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <limits>
#include <string>
#include <sstream>
#include <cmath>
#include <cctype>

#ifdef LOCAL
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define debuga(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<*it<<",";} cerr<<endl;
#define debugm(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<it->first<<","<<it->second<<endl;} cerr<<endl;
#else
#define debug(x) 42
#define debuga(a) 42
#define debugm(a) 42
#endif
#define endl '\n'
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

void solve(){
	int n, k2;
	cin>>n>>k2;
	vector<int> a(n);
	
	map<pair<int, int>, int> dp;
	for(int i=0; i<n; i++){
		cin>>a[i];
		dp[make_pair(i, i)] = a[i];
	}
	double maxav = 0;
	for(int k=k2; k<=n; k++){
		for(int i=0; i<=n-k; i++){
			if(k == k2){
				int sum = 0;
				for(int j=i; j<i+k; j++){
					sum += a[j];
				}
				dp[make_pair(i, i+k-1)] = sum;
				debug(k);
				debug(sum);
				double av = sum*1.0/k;
				debug(av);
				maxav = av > maxav ? av : maxav;
			}
			else{
				int a = i;
				int b = i+k-1;
				debug(k);
				dp[make_pair(a,b)] = dp[make_pair(a,b-1)] + dp[make_pair(b, b)];
				debug(dp[make_pair(a,b)]);
				double av = dp[make_pair(a,b)]*1.0/k;
				maxav = av > maxav ? av : maxav;
			}
		}
	}
	cout<<fixed;
	cout.precision(8);
	cout<<maxav<<endl;
}

int main(){
	optimizar_io;

	solve();
}
