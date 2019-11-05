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
	int q;
	cin>>q;
	while(q--){
		int n, k;
		cin>>n>>k;
		string s;
		cin>>s;
		int z = 0;
		for(int i=0; i<n && k>0; i++){
			if(s[i] == '0'){
				swap(s[max(i-k, z)], s[i]);
				k-=i-max(i-k, z);
				z++;
			}
		}
		cout<<s<<endl;
	}
}
