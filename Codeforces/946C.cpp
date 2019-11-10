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
	string s;
	string r = "abcdefghijklmnopqrstuvwxyz";
	cin>>s;
	for(int i=0; i<s.length()-1; i++){;
		int j=i;
		for(; j<i+26 && j<s.length(); j++){
			if(s[j]>r[j-i]){
				break;
			}
		}
		if(j-i == 26){
		
			for(int k=i; k<j; k++){
				s[k] = r[k-i]; 
			}
			cout<<s<<endl;
			return 0;
		}
		i = j;
	}
	cout<<-1<<endl;
}
