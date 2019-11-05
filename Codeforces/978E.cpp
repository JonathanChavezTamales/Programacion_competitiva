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
	int n;
	long long int m;
	cin>>n>>m;
	vector<unordered_set<long int> > q(n+1);
	vector<long int> r(n+1);
	for(int i=1; i<=n; i++){
		cin>>r[i];
	}
	for(long int i=0; i<m; i++){
		int a, b;
		cin>>a>>b;
		q[a].insert(b);
		q[b].insert(a);
	}
	for(int i=1; i<=n; i++){
		int res = 0;
		for(int j=1; j<=n; j++){
			if(r[i] > r[j]){
				if(q[i].find(j) == q[i].end()) res++;
			}
		}
		cout<<res<<" ";
	}
}
