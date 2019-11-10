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
	int n;
	cin>>n;
	vector<long int> a(n);
	long long int sum = 0;
       	for(int i=0; i<n; i++){
		cin>>a[i];
		sum += a[i];
	}	
	vector<long int> vals(n);
	int res = 0;
	for(int i=0; i<n; i++){
		long long int tsum = sum-a[i];
		for(int j=0; j<i; j++){
			if(tsum-a[j] == a[j]){		
				vals[res] = i+1;
				res++;	
			}
		}
		for(int j=i+1; j<n; j++){
			if(tsum-a[j] == a[j]){
				vals[res] = i+1;
				res++;
			}
		}
	}

	cout<<res<<endl;
	for(int i=0; i<res; i++) cout<<vals[i]<<" ";
	cout<<endl;
}
