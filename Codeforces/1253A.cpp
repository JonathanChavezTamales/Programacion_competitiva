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

#ifdef LOCAL
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define debug_c(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<*it<<",";} cerr<<endl;
#else
#define debug(x) 42
#define debug_c(a) 42
#endif

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int q;
	cin>>q;
	while(q--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		vector<int> b(n);
		for(int i=0; i<n; i++){
			cin>>b[i];
		}
		int subs = 0;
		bool cons = false;
		int k = 0;
		bool die = false;
		for(int i=0; i<n; i++){
			debug(k);
			if(subs > 1){
				die = true;
				break;
			}
			else if(a[i]!=b[i] && !cons){
				k = b[i]-a[i];
				if(k<0){
					die = true;
					break;
				}
				cons = true;
				subs++;	
			}
			else if(a[i]!=b[i]){
				if((b[i]-a[i]) != k){
					die = true;
					break;
				}
			}
			else if(a[i] == b[i]){
				cons = false;
			}
		}
		if(die){
			cout<<"NO"<<endl;
		}
		else cout<<"YES"<<endl;
	}
}
