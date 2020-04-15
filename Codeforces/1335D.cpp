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
		vector<string> a(9);
		for(int i=0; i<9; i++){
			
				cin>>a[i];
		
		}
		
		for(int i=1;i<=3;i++){
			unordered_set<char> s;
			s.insert(a[i*3-3][i*3-3]);
			s.insert(a[i*3-1][i*3-1]);
			s.insert(a[i*3-2][i*3-2]);
			swap(a[i*3-1][i*3-1], a[i*3-2][i*3-2]);
			for(int j=1; j<10; j++){
				if(s.find(j + '0') == s.end()){
					char c = (char)(j+'0');
					debug(c);
					debug(i*3-3);
					a[i*3-3][i*3-3] = c;
					break;	
				}
			}
		}	

		for(int i=0; i<9; i++){
			for(int j=0; j<9; j++){
				cout<<a[i][j];
			}
			cout<<endl;
		}


	}
}
