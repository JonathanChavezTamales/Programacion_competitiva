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
	int n;
	cin>>n;
	vector<vector<bool> > a(11, vector<bool>(11,0));
	bool f = true;
	while(n--){
		int d,l,r,c;
		cin>>d>>l>>r>>c;
		int end;
		debug(f);
		if(!f) continue;
		if(d){
			if(r+l-1 >10){
				f=false;
			}
			else{
				for(int i=r; i<=r+l-1; i++){
					if(a[i][c]){
						f=false;
						break;
					}
					a[i][c] = true;
				}
			}
		}
		else{
			if(c+l-1 > 10){
				f=false;
			}
			else{
				for(int i=c; i<=c+l-1; i++){
					if(a[r][i]){
						f=false;
						break;
					}
					a[r][i] = true;
				}
			}
		}
	}
	if(!f) cout<<"N"<<endl;
	else cout<<"Y"<<endl;
}

int main(){
	optimizar_io;

	solve();
}
