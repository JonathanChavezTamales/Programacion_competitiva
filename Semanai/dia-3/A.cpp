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

	int i=0, j=n-1;

	while(i<n-1 && a[i+1]>a[i]) i++;
	while(j>0 && a[j]<a[j-1]) j--;
	
	int x = a[i];
	bool bad = false;

	debug(j); debug(i);
	for(int k=i; k<=j; k++){
		if(x != a[k]){
			bad = true;
			break;
		}
	}

	if(bad) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;

}
