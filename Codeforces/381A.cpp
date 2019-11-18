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
	int n;
	cin>>n;
	deque<int> d;
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		d.push_back(x);
	}
	int s=0, r=0;
	for(int i=0; i<n; i++){
		int front = d.front();
		int back = d.back();
		int res = 0;
		if(back > front){
			res = back;
			d.pop_back();
		}
		else{
			res = front;
			d.pop_front();
		}
		if(i&1){
			r+=res;
		}
		else s+=res;
	}
	cout<<s<<" "<<r<<endl;

}
