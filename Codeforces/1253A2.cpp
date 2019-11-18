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
		vector<int> c(n);
		bool die = false;
		for(int i=0; i<n; i++){
			cin>>b[i];
			c[i] = b[i]-a[i];
			if(c[i] < 0){
				die = true;
			}
		}
		if(!die){
			int k = 0;
			int subs = 0;
			for(int i =0; i<n; i++){
				if(c[i] != 0 && k==0){
					debug(k);
					debug(i);
					k = c[i];
					subs++;
					if(subs>1){
						die = true;
						break;
					}
				}
				else if(c[i]!=0 && c[i]!=k){
					die = true;
					break;
				}
				else if(c[i] == k){
					
				}
				else{
					k = 0;
				}
			}
			debug(k);
			debug(subs);
			if(!die) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}	
		else{
			cout<<"NO"<<endl;
		}
	}
}
