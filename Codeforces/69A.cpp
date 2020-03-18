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
	int n;
	cin>>n;
	int x=0,y=0,z=0;
	while(n--){
		int a,b,c;
		cin>>a>>b>>c;
		x+=a;
		y+=b;
		z+=c;
	}
	debug(x);
	debug(y);
	debug(z);
	if(z == 0 && y == 0 && x == 0){
		cout<<"YES"<<endl;
	} else{
		cout<<"NO"<<endl;
	}
}
