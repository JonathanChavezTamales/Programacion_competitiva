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

map<int, int> factors(int n){
	map<int, int> facs;

	for(int i=2; i <= sqrt(n); i++){
		while(n%i == 0){
			n /= i;
			facs[i]++;
		}
	}

	if(n>1){
		facs[n]++;
	}
	return facs;
}

void solve(){
	int t;
	cin>>t;
	map<int, map<int, int> > tfacs;
	while(t--){
		int n;
		cin>>n;
		map<int, int> facs;
		if(tfacs.find(n) == tfacs.end()) tfacs[n] = factors(n);
		facs = tfacs[n];
		
		debugm(facs);
		int fsize = facs.size();
		if(n==1) cout<<0<<endl;
		else if(facs.size() > 2){
			cout<<-1<<endl;
		}
		else if(facs[2] > 0 || facs[3] > 0){
			if((facs[2] == 0 || facs[3] == 0) && fsize == 2){
					cout<<-1<<endl;
					continue;
			}
			int tres = facs[3];
			int dos = facs[2];
			debug(dos);
			debug(tres);
			if(dos <= tres){
				cout<<2*tres-dos<<endl;
			}
			else{
				cout<<-1<<endl;
			}
		}
		else{
			cout<<-1<<endl;
		}
	}
}

int main(){
	optimizar_io;

	solve();
}
