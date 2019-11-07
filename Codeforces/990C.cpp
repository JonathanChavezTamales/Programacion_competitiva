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

unordered_map<string, bool> dp;

bool balanced(string s){
	int c = 0;
	if(dp.find(s) != dp.end()){ cerr<<"dp"<<endl; return dp[s]; }
	for(int i=0; i<s.length(); i++){
		if(s[i] == ')') c--;
		else c++;
		if(c==-1) { dp[s] = false; return false;}
	}
	if(c==0){ dp[s] = true; return true;}
	else{ dp[s] = false;  return false;}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	vector<string> ss(n);
	for(int i=0; i<n; i++){
		cin>>ss[i];
	}
	int t = 0;
	for(int i=0; i<n; i++){
		int sum = 0;
		for(int j=i; j<n; j++){
			int p = 0;
			if(balanced(ss[i]+ss[j])) p++;
			if(balanced(ss[j]+ss[i])) p++;
			if(i==j && p == 2) p--;
			sum+=p;
		}
		t+=sum;
	}
	cout<<t<<endl;
}
