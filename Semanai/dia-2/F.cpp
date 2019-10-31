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

using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin>>n;
	vector<long int> a(n);
	for(int i=0; i<n; i++){
		long int x;
		cin>>x;
		a[i] = abs(x);
	}

	sort(a.begin(), a.end());
	
	int sum = 0;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(a[j]<2*a[i]) sum++;
			else break;
		}
	}
	cout<<sum;
}
