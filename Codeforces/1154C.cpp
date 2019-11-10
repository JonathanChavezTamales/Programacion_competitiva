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
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	long int a, b, c;
	cin>>a>>b>>c;
	long int i = 0;
	int sum = a+b+c;
	for(i=0; i<sum && a>=0 && b>=0 && c>=0; i++){
		int d = i%7;
		cerr<<"entered"<<endl;
		if(d == 0 || d == 3 || d == 6){
			if()
			a--;
		}	
		else if(d == 1 || d == 5){
			b--;
		}
		else c--;
		debug(a); debug(b); debug(c);
	}
	cout<<i<<endl;
}
