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
bool is_prime(int x){
	if(x == 2 || x==3) return true;
	if(x%2 == 0 || x<=1) return false;
	for(int i=3; i<=sqrt(x); i+=2){
		if(x%i == 0) return false;
	}
	return true;
}

//Nearest prime up
int npu(int x){
 	if(is_prime(x)) return 0;
	int min_d = INT_MAX;
	for(int i=x+1; ; i++){
		if(is_prime(i)) return i-x;
	}
}



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin>>n>>m;
	int M[n][m];
	vector<int> rows(n, 0);
	vector<int> cols(m,0);
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
		        cin>>M[i][j];
			int d = npu(M[i][j]);
			debug(d);
			rows[i] += d;
			cols[j] += d;
		}
	}
	cerr<<"rows"<<endl;
	for(int i=0; i<n; i++) cerr<<rows[i]<<",";

	cerr<<endl<<"cols"<<endl;
	for(int i=0; i<m; i++) cerr<<cols[i]<<",";

	cerr<<"mine: "<<*min_element(cols.begin(), cols.end())<<endl;
	cout<<min(*min_element(rows.begin(), rows.end()), *min_element(cols.begin(), cols.end()));
}
