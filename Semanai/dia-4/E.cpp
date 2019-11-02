#include <iostream>
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
	long int last = 0;
	int max_ss = 0, cur_ss = 0;
	for(int i=0; i<n; i++){
		long int x;
		cin>>x;
		if(x>=last){
			cur_ss++;
			max_ss = max(cur_ss, max_ss);
		}
		else cur_ss = 1;
		last = x;
	}
	cout<<max_ss<<endl;
}
