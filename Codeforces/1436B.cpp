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
#define MAXN 100000

using namespace std;

vector<bool> criba(MAXN+1, 1);

void me(){
	criba[0] = criba[1] = false;
	for(int i=2; i*i<=MAXN; i++){
		if(criba[i]){
			for(int j=i*i; j<=MAXN; j+=i){
				criba[j] = false;
			}
		}
	}
}

void solve(){
	int t;
	cin>>t;
	me();
	while(t--){
		int n;
		cin>>n;
		if(n==1){
			cout<<1<<endl;
		}	
		else if(n == 2){
			cout<<"1 1\n1 1"<<endl;
		}
		else{
			for(int i=0; i<n; i++){
				for(int j=0; j<n; j++){
					if(j==0 && i==n-1) cout<<1<<" ";
					else if(j==i || j==i+1){
						cout<<1<<" ";
					}
					else cout<<0<<" ";
				}
				cout<<endl;
			}
		}
	}
}

int main(){
	optimizar_io;

	solve();
}
