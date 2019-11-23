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
	int a, b;
	cin>>a>>b;
	if(max(a,b) == 1){
		cout<<"1/1"<<endl;
	}
	else if(max(a,b) == 2){
		cout<<"5/6"<<endl;
	}
	else if(max(a,b) == 3){
		cout<<"2/3"<<endl;
	}
	else if(max(a,b) == 4){
		cout<<"1/2"<<endl;
	}
	else if(max(a,b) == 5){
		cout<<"1/3"<<endl;
	}
	else if(max(a,b) == 6){
		cout<<"1/6"<<endl;
	}
}
