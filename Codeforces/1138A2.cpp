#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;

	int a=0, b = 0;
	if(s[0] == '1') a++;
	else b++;

	for(int i=1; i<n; i++){
		if(s[i] == s[i-1]){
			if(s[i] == '1') a++;
			else b++;
		}
		else{
			if(s[i] == '1')
		}
	}	
}
