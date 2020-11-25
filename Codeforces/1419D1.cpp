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

void solve(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a.begin(), a.end());
	vector<int> b(n);
	int j = n/2;
	for(int i=j, k=0; i<n; i++, k+=2){
		debug(k);
		debug(a[i]);
		b[k] = a[i];
	}
	debuga(b);
	for(int i=0, k=1; i<j; i++, k+=2){
		debug(k);
		debug(a[i]);
		b[k] = a[i];
	}
int r = j;
	if(n%2==0) r--;
	cout<<r<<endl;
	for(int i : b){
		cout<<i<<" ";
	}
	
	cout<<endl;
}

int main(){
	optimizar_io;

	solve();
}
