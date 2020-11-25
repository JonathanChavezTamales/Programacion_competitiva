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
		int x;
		cin>>x;
		vector<int> a(x);
		int ne = 0;
		int pos = 0;
		for(int i=0; i<x; i++){
			cin>>a[i];
			if(a[i] >= 0) pos += a[i];
			else ne += a[i];
		}
		sort(a.begin(), a.end());
		if(pos == abs(ne)){
			cout<<"NO"<<endl;
		}
		else if(abs(ne) < pos){
			cout<<"YES"<<endl;
			for(int i=x-1; i>=0; i--) cout<<a[i]<<" ";
		}
		else{
			cout<<"YES"<<endl;
			for(int i=0; i<x; i++){
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;

	}
}

int main(){
	optimizar_io;

	solve();
}
