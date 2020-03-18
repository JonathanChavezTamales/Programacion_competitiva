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
	long long int n, b, d;
	cin>>n>>b>>d;
	int count = 0;
	long long int size =0;
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		if(x<=b){
			size += x;
			count++;
		}
	}
	if(count == 0){
		cout<<0<<endl;
		return 0;
	}
	long long int res = size / d;
	if(size%d == 0) res -= 1;
	cout<<res<<endl;
}
