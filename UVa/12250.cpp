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
	string s = "";
	int i = 0;
	while(s != "#"){
		i++;
		cin>>s;
		if(s == "#") return 0;
		cout<<"Case "<<i<<": ";
		if(s == "HELLO"){
			cout<<"ENGLISH";
		} else if(s == "HOLA"){
			cout<<"SPANISH";
		} else if(s == "HALLO"){
			cout<<"GERMAN";
		} else if(s == "BONJOUR"){
			cout<<"FRENCH";
		} else if(s == "CIAO"){
			cout<<"ITALIAN";
		} else if(s == "ZDRAVSTVUJTE"){
			cout<<"RUSSIAN";
		} else{
			cout<<"UNKNOWN";
		}
		cout<<endl;
	}
}
