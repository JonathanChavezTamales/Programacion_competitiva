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
	long int n, q;
	cin>>n>>q;
	vector<long long int> a(n+1, 0);
	for(int i=1; i<=n; i++){ cin>>a[i]; a[i] += a[i-1];}
	for(int i=1; i<=q; i++){
		long long int x;
		cin>>x;
		vector<long long int>::iterator lb = lower_bound(a.begin(), a.end(), x)-1;
		cout<<lb-a.begin()+1<<" "<<x-*lb<<endl;
	}
	
}
