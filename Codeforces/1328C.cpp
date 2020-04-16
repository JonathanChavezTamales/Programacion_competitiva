#ifdef LOCAL
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
#include <list>
#include <climits>
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define debug_c(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<*it<<",";} cerr<<endl;
#define EPS 0.0000001
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif

using namespace std;

void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;

	string mayor = "";
	string menor = "";

	bool b = false;

	for(int i=0; i<n; i++){
		if(s[i] == '0'){
			mayor += '0';
			menor += '0';
		}
		else if (s[i] == '2'){
			if(!b){
				mayor += '1';
				menor += '1';
			}
			else{
				menor += '2';
				mayor += '0';
			}
		}
		else {
			if(b == true){
				mayor += '0';
				menor += '1';
			}
			else{
				mayor += '1';
				menor += '0';
				b = true;
			}
		}
	}

	cout<<mayor<<endl<<menor<<endl;

}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
