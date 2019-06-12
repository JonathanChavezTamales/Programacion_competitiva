#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		string s;
		set<int> p;
		cin>>s;
		bool adj = true;
		for(int i=0; i<s.length(); i++){
			p.insert(s[i]);
			if(i>0){
				if(s[i-1] > s[i])
					adj = false;
			}
		}
		if(p.size() == s.length() && adj)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
