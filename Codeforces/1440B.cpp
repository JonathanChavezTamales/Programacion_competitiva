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
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		vector<int> a(n*k);
		for(int i=0; i<n*k; i++){
			cin>>a[i];
		}
		int m = n/2 +1;
		int r = n-m;
		int curr = 0;
		int p1 =0;
		int p2 =n*k-m;
		long long int res = 0;
		for(int i=0; i<k; i++){
			int med =0;
			med = a[p2];
			p2 -= m;
			p1 += r;
			res +=med;
			debug(med);
		}
		cout<<res<<endl;
	}
}

int main(){
	optimizar_io;

	solve();
}
