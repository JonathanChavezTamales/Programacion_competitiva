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


#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define debug_c(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<*it<<",";} cerr<<endl;
#define FOR(i,f,t) for(int i=f; i<(int)t; ++i)


using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	long long int n, k;
	cin>>n>>k;
	long long int l = 1, r = n;
	bool prin = false;
	cerr<<"a";
	while(l<=r){
		long long mid = (l+r)/2;
		debug(mid);
		debug(l);
		debug(r);
		if(mid*(mid+1)/2 == k + (n-mid)){
			cout<<n-mid<<endl;
			debug(mid);
			prin = true;
			break;
		}
		else if(mid*(mid+1)/2 -n+mid < k){
			l = mid+1;
		}
		else{
			r = mid-1;
		}
	}
	if(!prin) cout<<l<<endl;
}

