#include <iostream>
#include <set>

using namespace std;

int main(){
	int t;
	cin>>t;
	int i=1;
	while(t--){
		string s;
		cin>>s;
		bool lows=0;
		bool ups=0;
		bool consd=true;
		bool numb=false;
		bool spec=false;
		bool ten=s.size() >= 10;
		set<char> sp = {'.', '#', '$', '%', '/', '(', '&', ')'};
		for(int i=0; i<s.size(); i++){
			if(isupper(s[i])) ups = true;
			if(islower(s[i])) lows=true;
			if(s[i] >= '0' && s[i] <= '9') numb=true;
			if(i>0 && s[i-1] >= '0' && s[i-1] <= '9' && (s[i]==s[i-1]+1 || s[i]==s[i-1]-1)) consd = false;
			if(sp.find(s[i]) != sp.end()) spec = true;
		}
		int ac = lows+ups+(consd && numb)+spec+ten;
		if(ac < 3) cout<<"Assertion number #"<< i<<": Rejected"<<endl;
		else if(ac == 3) cout<<"Assertion number #"<< i<<": Weak"<<endl;
		else if(ac == 4) cout<<"Assertion number #"<< i<<": Good"<<endl;
		else if(ac == 5) cout<<"Assertion number #"<< i<<": Strong"<<endl;
		i++;
	}
}
