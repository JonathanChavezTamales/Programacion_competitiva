#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

bool diff(string s){
	unordered_set<char> st;
	for(int i=0; i<s.length(); i++){
		st.insert(s[i]);
	}
	return st.size() == s.length();
}

int main(){
	int l, r;
	cin>>l>>r;
	for(int i=l; i<= r; i++){
		if(diff(to_string(i))){
			cout<<i<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;
}
