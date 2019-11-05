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
	int q;
	cin>>q;
	while(q--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0; i<n; i++) cin>>a[i];
		int current = 1;
		int k = n-1;
		while(k>0 && current != n){	
			int current_index = find(a.begin(), a.end(), current)-a.begin();
			if(current-1 != current_index){
				swap(a[current_index], a[current_index-1]);
				k--;
			}	
			else{
				current++;
			}
		}	
		for(int i=0; i<n; i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}	
}
