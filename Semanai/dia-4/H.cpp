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

	int n, a, b, c;
	cin>>n>>a>>b>>c;
	vector<int> arr{a,b,c};
	int maxi = 0;
	sort(arr.begin(), arr.end(), greater<int>());
	for(int i=n/arr[0]; i>=0; i--){
		int j = n-i*arr[0];
		for(; j<=n/arr[1]; j++){	
			int k = 0	
		}
	}

	cout<<maxi<<endl;
}
