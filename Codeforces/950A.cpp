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
	int a, b, c;
	cin>>a>>b>>c;
	int resta = 0;
	if(a<b){
		resta = min(c, b-a);
		a += resta;
	} else if(b<a){
		resta = min(c, a-b);
		b += resta;
	}
	c -= resta;
	int result = min(a,b);
	result += c/2;

	cout<<result*2<<endl;
}
