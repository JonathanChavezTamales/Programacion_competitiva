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

#ifdef LOCAL
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define debug_c(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<*it<<",";} cerr<<endl;
#else
#define debug(x) 42
#define debug_c(a) 42
#endif

using namespace std;

int f(int l, int r, vector<int> &a, int n){
	vector<bool> t(n, true);
	int components = 1;
	int tachados = 0;
	for(int i=0; i<n; i++){
		if(!(a[i] >= l && a[i] <= r)){
			t[i] = false;
			tachados++;
		}
	}
	if(tachados == n) return 0;

	for(int i=0; i<n; i++){
		if(!(a[i] >= l && a[i] <= r)){
			cerr<<"fuera de rango"<<a[i]<<endl;
			if(!(i==0 || i==n-1)){
				if(t[i-1] == 1 && t[i+1] == 1) components++;	
			}
		}	
	}
	return components;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	long long int sum = 0;
	for(int l=1; l<=n; l++){
		for(int r=l; r<=n; r++){
			int comps = f(l, r, a, n);
			debug(r);
			debug(l);
			debug(comps);
			cerr<<endl;
			sum+=comps;
		}
	}
	cout<<sum<<endl;
}
