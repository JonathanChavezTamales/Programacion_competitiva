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
	int n, k;
	cin>>n>>k;
	vector<int> a(n);
	unordered_map<int, int> m;
	for(int i=0; i<n; i++){ cin>>a[i]; m[a[i]]++;}
	sort(a.begin(), a.end());
	int x = 0;
	for(int i= 1; i<n; i++){
		if(a[i]>a[i-1] && a[i]<=a[i-1]+k){
			x+=m[a[i-1]];
		}
	}
	cout<<n-x<<endl;
}
