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
		int n;
		cin>>n;
		vector<int> a(n);
		int maxi =0;
		for(int i=0; i<n; i++){
			cin>>a[i];
			maxi = max(a[i], maxi);
		}
		bool f = false;
		debug(maxi);
		for(int i=0; i<n; i++){
			debug(i);
			debug(a[i]);
			if(a[i] == maxi){

				if(i==0){
					if(a[i+1] < maxi){
						cout<<i+1<<endl;
						f = true;
						break;
					}
				}
				else if(i==n-1){
					if(a[i-1] < maxi){
						cout<<i+1<<endl;
						f= true;
						break;
					}
				}
				else{
					if(a[i+1] < maxi || a[i-1] < maxi){
						cout<<i+1<<endl;
						f= true;
						break;
					}
				}
			}
		}
		if(!f){
			cout<<-1<<endl;
		}
	}
}

int main(){
	optimizar_io;

	solve();
}
