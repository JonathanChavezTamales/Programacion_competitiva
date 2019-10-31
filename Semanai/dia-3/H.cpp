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


#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define debug_c(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<*it<<",";} cerr<<endl;
#define FOR(i,f,t) for(int i=f; i<(int)t; ++i)


using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin>>n;
	vector<int> a(n);
	vector<int> acc(n);
	int sum = 0;
	for(int i=0; i<n; i++){
		cin>>a[i];
		sum+=a[i];
		acc[i] = sum;
	}

	int m;
	cin>>m;
	for(int i=0; i<m; i++){
		int q;
		cin>>q;
		cout<<lower_bound(acc.begin(), acc.end(), q)-acc.begin()+1<<endl;
	}

}
