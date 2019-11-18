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
	vector<int> a(n);
	unordered_set<int, int> dentro, salieron, total;
	int dias = 0;
	vector<int> actions;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int acs = 1;
	for(int i=0; i<n; i++){
		total.insert(abs(a[i]));
		if(a[i] < 0){
			if(dentro.find(-a[i]) == dentro.end()){
				dias++;
				actions.push_back(acs);
				salieron.clear();
				dentro.clear();
				total.clear();
				acs = 0;
			}
			else{
				dentro.erase(-a[i]);
				salieron.insert(-a[i]);
			}
		}
		else{
			if(salieron.find(a[i]) != salieron.end()){
				dias++
			}
		}
		acs++;
	}
}
