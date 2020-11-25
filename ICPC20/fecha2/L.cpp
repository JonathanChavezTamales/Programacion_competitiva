#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <limits>
#include <string>
#include <sstream>
#include <cmath>
#include <cctype>

#ifdef LOCAL
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define debuga(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<*it<<",";} cerr<<endl;
#define debugm(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<it->first<<","<<it->second<<endl;} cerr<<endl;
#else
#define debug(x) 42
#define debuga(a) 42
#define debugm(a) 42
#endif
#define endl '\n'
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

void solve(){
	int l, c;
	cin>>l>>c;
	vector<string> mt(l);
	for(int i=0; i<l; i++){
		string s;
		cin>>s;
		mt[i] = s;
	}
	int n;
	cin>>n;
	vector<string> words(n);
	for(int i=0; i<n;i++){
		string s;
		cin>>s;
		words[i] = s;
	}
	
	vector<string> cands(words);
	vector<string> newcands;

	m

	for(int i=0; i<l; i++){
		for(int j=0; j<c; j++){
			char c = mt[i][j];
			for(string w: cands){
				if(w.find(c) != string::npos){
					if(w.size() == 1){
						
					}
					string k = w;
					k.erase(c);
					newcands.push_back(k);
				}
			}
			cands = newcands;
		}
	}

}

int main(){
	optimizar_io;

	solve();
}
