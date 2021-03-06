#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <limits>
#include <string>
#include <sstream>
#include <cmath>
#include <cctype>

#ifdef LOCAL
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define debuga(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<*it<<",";} cerr<<endl;
#define debugm(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<it->first<<","<<it->second<<endl;} cerr<<endl;
#else
#define debug(x) 42
#define debuga(a) 42
#define debugm(a) 42
#endif
#define endl '\n'
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int minidx(vector<int> &a, int l, int r){
	int minidx = l;
	for(int i=l; i<=r; i++){
		minidx = a[minidx] >= a[i] ? i : minidx;
	}
	return minidx;
}

void solve(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		int begin = 0;
		while(begin < n-1){
			int right = minidx(a, begin, n-1);
			for(int i=right; i>begin; i--){
				int c = a[i];
				a[i] = a[i-1];
				a[i-1] = c;
			}
			begin = right == begin ? right+1 : right;
		}
		for(int i : a){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}

int main(){
	optimizar_io;

	solve();
}
