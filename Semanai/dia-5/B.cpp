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
#define FOR(i,f,t) for(int i=f; i<(int)t; ++i)

long long int s(long long int n){
	return n*(n+1)/2;
}

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int k;
	cin>>k;
	for(int i=1; i<(4*sqrtl(k)+40); i++){
		int l= 1, r=(4*sqrtl(k)+40);
		while(l<=r){
			int mid = (l+r)/2;
			if(s(mid) + s(i) == k){
				cout<<"YES"<<endl;
				debug(i); debug(mid);
				return 0;
			}
			else if(s(mid) + s(i) < k){
				l = mid+1;
			}
			else r = mid - 1;
		}		
	}
	cout<<"NO"<<endl;
}
