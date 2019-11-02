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
	int n, k;
	cin>>n>>k;
	string s;
	cin>>s;
	int x = 0;
	bool lleg = false;
	int sum = 0;
	for(int i=min(x+k, n-1); i>x; i--){
		if(s[i] == '1'){
			x = i;
			i = x+k+1;
			sum++;
		}
		if(i>n-1){
			lleg = true;
		}
	}
	if(lleg) cout<<sum<<endl;
	else cout<<-1<<endl;
}
