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
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(s.length() == 1){
			cout<<s<<endl;
			continue;
		}
		else{
			map<char, int> cont, ocs;
			ocs[s[0]]++;
			bool lastcont = false;
			for(int i=1; i<s.length(); i++){
				ocs[s[i]]++;
				if(s[i] == s[i-1] && !lastcont){
					cont[s[i]]++;
					lastcont = true;
				}
				else lastcont = false;
			}
			for(map<char, int>::iterator it=ocs.begin(); it!=ocs.end(); ++it){
				debug(it->first);
				debug(cont[it->first]);
				debug(it->second);
				if(2*cont[it->first] != (it->second)) cout<<(it->first);
			}
			cout<<endl;
		}
	}
}
