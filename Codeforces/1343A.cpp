#ifdef LOCAL
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
#include <list>
#include <climits>
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define debug_c(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<*it<<",";} cerr<<endl;
#define EPS 0.0000001
#else
#include <bits/stdc++.h>
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
		int n;
		cin>>n;
		bool f= false;
		for(int i=1; i*i<=n; i++){
			if(n%i==0){
				int r = n/i;
				if(((r+1) & r) == 0){
					cout<<i<<endl;
					f = true;
					break;
				}
				else if(((i+1) & i) == 0 && i > 1){
					cout<<r<<endl;
					f = true;
					break;
				}
			}
		}
		if(!f){
			cout<<n<<endl;
		}
	}
}
