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
	vector<long int> x(4);
	long int maxi = INT_MIN;
	int idx = 0;
	for(int i=0; i<4; i++){
	       	cin>>x[i];
		if(maxi < x[i]){
			maxi = x[i];
			idx = i;
		}
	}
	for(int i=0; i<4; i++){
		if( i != idx){
			cout<<maxi-x[i]<<" ";
		}
	}
}
