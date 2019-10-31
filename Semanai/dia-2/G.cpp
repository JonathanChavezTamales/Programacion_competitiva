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

	int n, k;
	cin>>n>>k;
	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	string c;
	cin>>c;

	int i=0, j=0; 
	long int sum=0;

	for(;i<n; i=j){
		while(c[i]==c[j] && j<n){
			j++;
		}
		sort(a.begin()+i, a.begin()+j, greater<int>());
		for(int x=i; x<i+k && x<j; x++){ 
			sum+= a[x];
		}
	}

	cout<<sum<<endl;

}
