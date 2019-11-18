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
	string s;
	cin>>s;
	char o = 'a';
	int r = 0;
	for(int i=0; i<s.length(); i++){
		int a = abs(s[i]-o);
		int b = ('z'-s[i]+1+o-'a');
		int c = 'z'-o+1+s[i]-'a';
		debug(a);
		debug(b);
		o = s[i];
		r+=min(min(a,b),c);
	}
	cout<<r<<endl;
}
