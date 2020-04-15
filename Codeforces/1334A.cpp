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
		bool perdio = false;
		cin>>n;
		int la=-1;
		int lb=-1;
		for(int i=0; i<n; i++){
			int b, a;
			cin>>a>>b;
			if (a<la || b<lb || b>a || a-la<b-lb) perdio = true;
		       	la = a;
			lb = b;	
		}
		if(perdio) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
}
