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

int min_swaps(string s){
	int sum = 0;
	string ref = "ACTG";
	for(int i=0; i<s.length(); i++){
		int s1 = abs(s[i] - ref[i]);
		int s2 = 'Z'-max(ref[i],s[i]) + min(s[i],ref[i])-'A'+1;
		sum += min(s1,s2);
	}
	return sum;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	string s;
	cin>>s;
	int mini = INT_MAX;
	for(int i=0, j=3; j<n; i++, j++){
		int swaps = min_swaps(s.substr(i, 4));
		mini = swaps < mini ? swaps : mini;
	}	
	cout<<mini<<endl;
}
