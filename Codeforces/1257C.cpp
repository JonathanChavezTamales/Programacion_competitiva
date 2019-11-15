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
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;	
		vector<int> a(n);
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		if(n == 1){
			cout<<-1<<endl;
			continue;
		}

		map<int, int> li;
		int mini = n;
		bool found = false;
		for(int i=0; i<n; i++){
			if(li.find(a[i]) != li.end()){
				found = true;
				mini = min(i-li[a[i]], mini);
			}
			li[a[i]] = i;
		}
		if(found) cout<<mini+1<<endl;
		else cout<<-1<<endl;
	}
}
