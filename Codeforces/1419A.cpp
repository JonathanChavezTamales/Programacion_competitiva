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
		int d;
		cin>>d;
		string s;
		cin>>s;
		pair<int, int> r = {0, 0};
		pair<int, int> b = {0, 0};
		for(int i=0; i<s.size(); i++){
			debug(s[i]-'0');
			if(i%2==0){
				if((s[i]-'0')%2 == 0) r.first++;
				else r.second++;	
			}
			else{
				if((s[i]-'0')%2 == 0) b.first++;
				else b.second++;
			}
		}	
		debug(r.first);
		debug(r.second);
		debug(b.first); 
		debug(b.second);
		if(s.size()%2==0){
			if(b.first) cout<<2;
			else cout<<1;
		}
		else{
			if(r.second) cout<<1;
			else cout<<2;
		}
		cout<<endl;
	}
}

int main(){
	optimizar_io;

	solve();
}
