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
	FOR(i,0,n){
		cin>>a[i];
	}
	if(n == 1){
		cout<<0<<endl;
	}
	else{
		int sum = 0;
		for(int i=0, j=2; j<n; i++, j++){
			if(a[j]-a[i]==2){
				sum++;
			}
		}
		if(a[n-2]+1 == a[n-1] || a[0]+1 == a[1]){
			sum++;
		}
		cout<<sum<<endl;
	}
	
}
