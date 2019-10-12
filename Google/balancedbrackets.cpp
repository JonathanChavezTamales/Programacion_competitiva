#include <iostream>
#include <stack>
#include <string>

using namespace std;

char closing_bracket(char b){
	if(b == '{') return '}';
	else if(b == '(') return ')';
	else if(b == '[') return ']';
	return 'x';
}

bool balanced(string s){
	stack<char> opens;
	for(int i=0; i<s.length(); i++){
		if(s[i] == '{' || s[i] == '(' || s[i] == '['){
			opens.push(s[i]);
		}
		else{
			if(opens.empty()){
				return false;
			}
			else{
				if(closing_bracket(opens.top()) == s[i]){
					opens.pop();
				}
				else{
					return false;
				}
			}
		}
	}
	if(opens.empty())
		return true;
	return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<balanced(s)<<endl;
	}
}
