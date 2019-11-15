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

bool comparator(pair<long int, long int> &a, pair<long int, long int> &b){
	return a.second > b.second;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		int max_mon = 0;
		for(int i=0; i<n; i++){
			cin>>a[i];
			max_mon = max(max_mon, a[i]);
		}
		int m; 
		cin>>m;
		long int max_her = 0;
		vector<pair<long int, long int> > b(m);
		for(int i=0; i<m; i++){
			long int p, s;
			cin>>p>>s;
			b[i] = make_pair(p, s);
			max_her = max(max_her, b[i].first);
		}
		if(max_her < max_mon){
			cout<<-1<<endl;
			continue;
		}
		
		sort(b.begin(), b.end(), comparator);

		for(int i=0; i<b.size(); i++){
			cerr<<b[i].first<<","<<b[i].second<<endl;
		}

		vector<bool> alive(n, 1);
		int killed = 0;
		int last = 0;
		for(int i=0; i<m; ){
			debug(i);
			debug(last);
			debug(b[i].second);
			for(int j=last; j<n && j<b[i].second; j++){
				if(alive[j]){
					cerr<<"está vivo";
					if(a[j] <= b[i].first){
						cerr<<" y lo maté";
						alive[j] = 0;
						killed++;
						last = j;		
					}
					else{
						i++;
						break;
					}
					cerr<<endl;
				}
				debug(j);
			}
			debug(killed);
			if(killed == n){
				cout<<i+1<<endl;
				break;
			}
		}
	
	}
}
