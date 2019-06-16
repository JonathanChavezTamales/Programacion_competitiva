#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	cin>>s;
	for(int i=0; i<s.length(); i++){
		if((s.length()-i)%2 == 1){
			if(i==0)
				cout<<s[0];
			else
				cout<<s[i-1];

		}
		else if((s.length()-i)%2 == 0){
			cout<<s[s.length()-i];
		}
	}	
}
