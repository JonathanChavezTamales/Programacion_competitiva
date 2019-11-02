#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main(){
	int q;
	cin>>q;
	while(q--){
		string s, t;
		cin>>s>>t;
		unordered_set<char> ins;

		for(int i=0; i<s.length(); i++){
			ins.insert(s[i]);
		}

		bool is = false;
		for(int i=0; i<t.length(); i++){
			if(ins.find(t[i]) != ins.end()){ is = true; break;}
		}

		if(is) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;

	}
}
