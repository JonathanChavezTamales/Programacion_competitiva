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
	long long int a, b;
	cin>>a>>b;
	while(a!=0 && b!=0){
		if(a >= 2*b){ 
			a %= b;
		}
		else if(b >= 2*a){
		       	b %= a;
		}
		else{
			break;
		}
		
	}
	cout<<a<<" "<<b<<endl;
}
