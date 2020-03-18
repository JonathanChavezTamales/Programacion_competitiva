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
	int k;
	cin>>k;
	while(k!=0){
		int x, y;
		cin>>x>>y;
		cerr<<"HERE"<<endl;
		for(int i=0; i<k; i++){
			cerr<<"NEWIT"<<endl;	
			int a, b;
			cin>>a>>b;
			if(a==x || b==y){
				cout<<"divisa"<<endl;
			}
			else{
				if(b>y){
					cout<<"N";
				} else {
					cout<<"S";
				}
	
				if(a>x){
					cout<<"E";
				} else {
					cout<<"O";
				}
				cout<<endl;
			}
		}
		cin>>k;
	}
}
