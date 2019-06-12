#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		string sr = s;
		reverse(sr.begin(), sr.end());
		if(s.length() == 1){
			cout<<-1;
		}
		else if(sr != s){
			cout<<s;
		}
		else{
			char t;
			t = s[s.length()/2];
			s[s.length()/2] = s[s.length()/2-1];
			s[s.length()/2-1] = t;
			if(s==sr)
				cout<<-1;
			else
				cout<<s;
		}
		cout<<endl;
	}
}
