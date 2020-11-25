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
	int n, m;
	cin>>n>>m;
	vector<vector<char> > sopa(n, vector<char>(m));

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>sopa[i][j];
		}
	}


	vector<vector<set<int> > > con(n, vector<set<int > > (m));
	int ws;
	cin>>ws;
	int special = 0;
	vector<string> words(ws);
	for(int k=0; k<ws; k++){
		debug(k);
		cin>>words[k];
		sort(words[k].begin(), words[k].end());
		
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				debug(i);
				debug(j);
				if(j+words[k].size() <= m){
					string cs = "";
					for(int i2=j; i2<j+words[k].size(); i2++){
						cs += sopa[i][i2];
					}
					sort(cs.begin(), cs.end());
					if(cs == words[k]){
						debug(i);
						debug(j);
						debug(words[k]);

						for(int i2=j; i2<j+words[k].size(); i2++){
							con[i][i2].insert(k);
						}
					}
					
				}
				if(i+words[k].size() <= n){
					string cs = "";
					for(int i2=i; i2<i+words[k].size(); i2++){
						cs += sopa[i2][j];
					}
					sort(cs.begin(), cs.end());
					if(cs == words[k]){
						debug(i);
						debug(j);
						debug(words[k]);
						for(int i2=i; i2<i+words[k].size(); i2++){
							con[i2][j].insert(k);
						}
					}
				}
				if(i+words[k].size() <= n && j+words[k].size() <= m){
					string cs = "";
					for(int i2=i, j2=j; i2<i+words[k].size() ; i2++, j2++){
						cs += sopa[i2][j2];
					}
					sort(cs.begin(), cs.end());
					if(cs == words[k]){
						debug(i);
						debug(j);
						debug(words[k]);
						for(int i2=i, j2=j; i2<i+words[k].size(); i2++, j2++){
							con[i2][j2].insert(k);
						}
					}
				}
				if(i+words[k].size() <= n && j+1 <= words[k].size()){
					string cs = "";
					for(int i2=i, j2=j; i2<i+words[k].size() ; i2++, j2--){
						cs += sopa[i2][j2];
					}
					sort(cs.begin(), cs.end());
					if(cs == words[k]){
						debug(i);
						debug(j);
						debug(words[k]);
						for(int i2=i, j2=j; i2<i+words[k].size(); i2++, j2--){
							con[i2][j2].insert(k);
						}
					}
				}
			}
		}



	}
		int spec = 0;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(con[i][j].size() >= 2) spec++;
			}
		}
		cout<<spec<<endl;	

}

int main(){
	optimizar_io;

	solve();
}
