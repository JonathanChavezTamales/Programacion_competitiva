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

long long int gcd(long long int a, long long int b){
	return b ? gcd(b, a%b) : a;
}

long long int lcm(long long int a, long long int b){
	return a*b/gcd(a,b);
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	long int a, b;
	cin>>a>>b;
	long long int min = LLONG_MAX;
	long long int mini = 0;
	for(long long int i=0; i<abs(a-b); i++){
		long long int l = lcm(a+i, b+i);
		if(l<min){
			min = l;
			mini = i;
		}
	}
	cout<<mini<<endl;
}
