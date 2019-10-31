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
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	int a=0,b=0,l=0,r=0;
	for(int i=0;i<n;i++){
		s[i]=='a'? a++ : b++;
		if(min(a,b)<=k) l=max(l,a+b);
		else s[r++]=='a'? a-- : b--;
	}
	cout<<l<<endl;
}

