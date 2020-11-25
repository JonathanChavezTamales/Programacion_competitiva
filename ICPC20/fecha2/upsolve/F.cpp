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
	string s;
	cin>>s;
	int gl = 0;
	int gr = 0;
	int pl = 0;
	int pr = 0;
	bool servesleft = true;
	bool gameover = false; 
	for(int i=0; i<s.size(); i++){
		if(s[i] == 'S'){
			if(servesleft) pl++;
			else pr++;
		}
		else if(s[i] == 'R'){
			if(servesleft) pr++;
			else pl++;
			servesleft = !servesleft;
		}
		else{
			if(gameover){
				if(gl > gr) cout<<gl<<" (winner) - "<<gr<<endl;
				else cout<<gl<<" - "<<gr<<" (winner)"<<endl;
 
			}
			else if(servesleft){
				cout<<gl<<" ("<<pl<<"*) - "<<gr<<" ("<<pr<<")"<<endl;
			}
			else{
				cout<<gl<<" ("<<pl<<") - "<<gr<<" ("<<pr<<"*)"<<endl;
			}
		}

		int maxi = max(pl, pr);
		int mini = min(pl, pr);
		if((maxi >= 5 && maxi-mini >=2) || maxi == 10){
			if(pl >pr) gl++;
			else gr++;
			pl = 0;
			pr = 0;
		}

		if(gl == 2 || gr == 2) gameover = true;
	}
}

int main(){
	optimizar_io;

	solve();
}
