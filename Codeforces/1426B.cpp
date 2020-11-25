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
		int n, m;
		cin>>n>>m;
		int f = 0;
		bool fu = 0;
		for(int i=0; i<n; i++){
			int a,b,c,d;
			cin>>a>>b>>c>>d;
			if(b == c) f = true;
			if(a == d && b == c) fu = true;
			debug(a);
			debug(b);
			debug(c);
			debug(d);
		}
		debug(fu);
		debug(f);
		if((m==2 && f) || (m!=2 && m%2==0 && f)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

int main(){
	optimizar_io;

	solve();
}
