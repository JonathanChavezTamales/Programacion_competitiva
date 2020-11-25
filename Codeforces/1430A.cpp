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
		int total = 0;
		bool f=0;
		for(int i=0; i<200; i++){
			if(i*3 > n) break;
			for(int j=0; j<201; j++){
				if(i*3 + j*5 > n) break;
				for(int k=0; k<335; k++){
					if(i*3 + k*7 + j*5 == n){
						debug(f);
						cout<<i<<" "<<j<<" "<<k<<endl;
						f=true;
						break;
					}
					else if (i*3 + k*7 + j*5 > n) break;
				}
				if(f) break;
			}
			if(f) break;
		}
		if(!f) cout<<-1<<endl;
	}
}

int main(){
	optimizar_io;

	solve();
}
