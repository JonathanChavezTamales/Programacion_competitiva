#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main(){
	string s;
	cin >> s;
	int uppers = 0, lowers = 0;
	for(int i=0; i<s.length(); i++){
		if(isupper(s[i])){
			uppers++;
		}
		else{
			lowers++;
		}
	}
	if(lowers >= uppers){
		for(int i=0; i<s.length(); i++)
			s[i]= tolower(s[i]);
	}
	else{
		for(int i=0; i<s.length(); i++)
			s[i] = toupper(s[i]);
	}
	cout << s;
}
