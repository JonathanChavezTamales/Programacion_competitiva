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
	int n, v;
	cin>>n>>v;
	int c = 0, m =0;
	for(int i=1; i<=n; i++){
		debug(c);
		debug(i);
		if(c < n-i){
			int g = min((n-i), (v-c));
			m += g*i;
			c += g;
		}
		else break;
		c--;
	}
	cout<<m<<endl;

}
