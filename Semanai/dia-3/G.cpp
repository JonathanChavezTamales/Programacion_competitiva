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


#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define debug_c(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<*it<<",";} cerr<<endl;
#define FOR(i,f,t) for(int i=f; i<(int)t; ++i)


using namespace std;

int number_of_caps(string s){
	int sum = 0;
	for(int i=0; i<s.length(); i++){
		if(isupper(s[i])) sum++;
	}
	return sum;
}



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin>>n;
	cin.ignore();
	string t;
	getline(cin, t);
	int mcaps = 0;
	int cp = 0;
	for(int i=0;i<n; i++){
		if(t[i] == ' '){
					cp = 0;
		}	
		else{
			if(isupper(t[i])){ cp++;
				
			}
		}
	mcaps = mcaps < cp ? cp : mcaps;

	}
	cout<<mcaps<<endl;
}
