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


#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define debug_c(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<*it<<",";} cerr<<endl;
#define FOR(i,f,t) for(int i=f; i<(int)t; ++i)


using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin>>n;
	string s;
	cin>>s;
	
	if(n==1){
		cout<<"NO"<<endl;
	}
	else{
		bool possible = false;
		for(int i=1; i<n; i++){
			if(s[i]!=s[i-1]){
				cout<<"YES"<<endl<<s[i-1]<<s[i]<<endl;
				possible = true;
				break;
			}
		}
		if(!possible) cout<<"NO"<<endl;
	}


}
