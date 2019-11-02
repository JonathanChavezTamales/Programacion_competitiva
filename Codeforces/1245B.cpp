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

//Hacer ifdef para solo declarar debug en local y hacer otro debug de string


#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define debug_c(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<*it<<",";} cerr<<endl;
#define FOR(i,f,t) for(int i=f; i<(int)t; ++i)


using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(3);
		cin>>a[0]>>a[1]>>a[2];
		string s;
		cin>>s;
		vector<int> b(3);
		for(int i=0; i<s.length(); i++){
			if(s[i]=='R') a[0]++;
			else if(s[i] == 'P') a[1]++;
			else a[2]++;
		}
		if(a[0]>=b[0] && a[1]>=b[1] && a[2]>=b[2]){
			cout<<"YES"<<endl;
			for(int i=0; i<n; i++){
				if(s[i] == 'R'){
					cout<<'P';
				}
				else if(s[i] == 'P'){
					cout<<'S';
				}
				else cout<<'R';
			}
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}
