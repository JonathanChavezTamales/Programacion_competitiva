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
	int n, m;
	cin>>n>>m;
	int ea=0, oa=0, eb=0, ob=0;
	for(int i=0; i<n; i++){
		long int x;
		cin>>x;
		if(x&1){
			oa++;
		}
		else ea++;
	}
	for(int i=0; i<m; i++){
		long long int x;
		cin>>x;
		if(x&1){
			ob++;
		}
		else eb++;
	}
	cout<<min(ea, ob)+min(eb, oa)<<endl;
}
