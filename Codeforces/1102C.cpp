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

int lb(vector<int> &arr, int a, int n){
	int max_idx = 0;
	for(int i=0; i<n; i++){
		if(arr[i] <= a && arr[i] > 0){
			max_idx = max(arr[i], arr[max_idx]) == arr[i] ? i : max_idx;
		}
	}
	if(arr[max_idx] > a) return -1;
	else return max_idx;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, a, b;
	cin>>n>>a>>b;
	vector<int> arr(n);
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	if(a>b){
		cout<<n<<endl;
		return 0;
	}
	int sig = 0;
	int zeros = 0;
	int turn = 1;
	while(sig >= 0){
		if(turn&1){
			sig = lb(arr, a, n);
			if(sig != -1){
				arr[sig] = 0;
				zeros++;
			}
		}
		else{
			sig = lb(arr, a, n);
			if(sig != -1){
				arr[sig] += b;
			}
		}
		turn++;
	}
	cout<<zeros<<endl;
}
