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

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin>>n>>k;
	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin>>a[i];
	}	
	double maxg = 0;	
	for(int i1 = 0; i1<=n-k; i1++){
		double maxi = 0, sum = 0;
		for(int i=0; i<k+i1; i++){
			sum += a[i];
		}
		maxi = sum*1.0/(k*1.0+i1);
		int l = a[0];
		for(int i=1, j=i+k-1+i1; j<n; i++, j++){
			sum = (sum-l+a[j])*1.0/(j*1.0-i+1);
			maxi = sum > maxi ? sum : maxi;
			l = a[i];
		}
		maxg = maxi > maxg ? maxi : maxg;
	}
	cout.precision(18);
	cout<<maxg<<endl;
}
