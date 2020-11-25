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
	bool p = true;
	vector<vector<int> > M(11, vector<int>(11));
	for(int i=0; i<n; i++){
		int d, l, r, c;
		cin>>d>>l>>r>>c;
		if(!d){ // c
			if(c+l-1 > 10) p=false;
			else{
				for(int i=c; i<c+l; i++){
					debug(r);
					debug(i);
					M[r][i]++;
					if(M[r][i] > 1) p=false;
				}
			}
		}
		else{ // r
			if(r+l-1 > 10) p=false;
			else{
				for(int i=r; i<r+l; i++){
					debug(i);
					debug(c);
					M[i][c]++;
					if(M[i][c] > 1) p =false;
				}
			}
		}
	}
	
	if(p) cout<<"Y"<<endl;
	else cout<<"N"<<endl;
}

int main(){
	optimizar_io;

	solve();
}
