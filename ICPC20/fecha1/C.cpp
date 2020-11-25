#include <iostream>
#include <set>
#include <vector>
#include <sstream>
#include <map>
#include <string>
#include <algorithm>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

void solve(){
	map<string, string> mp;
	int n;
	cin>>n;
	set<string> der;
	while(n--){
		string a, b;
		cin>>a>>b;
		mp[a] = b;
		mp[b] = a;
	}
	string s;
	cin.ignore();
	getline(cin, s);
	vector<std::string> result;
	std::istringstream iss(s);
	for(std::string s; iss >> s; )
    	result.push_back(s);
	for(int i=0; i<result.size(); i++){
		string smaller = result[i];
		string x1 = result[i];
		set<string> trans;
		trans.insert(x1);
		bool ent = true;
		while(ent){
			if(mp.find(x1) != mp.end()){
				string x2 = mp[x1];
				if(trans.find(x2) != trans.end()) ent = false;
				else trans.insert(x2);
				smaller = x2.size() < smaller.size() ? x2 : smaller;

				x1 = x2;
			}
			else{
				ent = false;
			}
		}
		result[i] = smaller;
	}
	for(string i : result){
		cout<<i<<" ";
	}
	cout<<endl;	
}

int main(){
	optimizar_io;

	solve();
}
