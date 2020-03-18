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
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	while(a||b||c||d){
		int ft = 720;
		int res1 = ((a-b)%40+40)%40;
		int st = 360;
		int res2 = ((c-b)%40+40)%40;
		int res3 = ((c-d)%40+40)%40;
		debug(res1);
		debug(res2);
		debug(res3);
		cout<<ft+st+9*(res1+res2+res3)<<endl;
		cin>>a>>b>>c>>d;
	}
}
