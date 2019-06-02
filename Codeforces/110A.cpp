#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	cin>>s;
	int luckys = 0;
	for(int i=0; i<s.length(); i++){
		if(s[i] == '4' || s[i] == '7')
			luckys ++;
	}
	if(luckys ==4 || luckys == 7){
		cout << "YES";
	}
	else{
		cout<<"NO";
	}
}
