#ifdef LOCAL
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
#include <list>
#include <climits>
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define debug_c(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<*it<<",";} cerr<<endl;
#define EPS 0.0000001
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		long long int n, x;
		cin>>n>>x;
		vector<long long int> a(n);
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a.begin(), a.end(), greater<int>());
		long long int s = 0;
		long long int count =0;
		for(int i=0; i<n; i++){
			if(a[i] >= x){
				s += a[i];
				count++;	
			}
			else{
				if(s-count*x+a[i]>=x){
					s+=a[i];
					count++;
				}
				else{
					break;
				}
			}
		}
		cout<<count<<endl;
	}
}
