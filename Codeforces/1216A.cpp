#include <iostream>
#include <string>

using namespace std;

int main(){
	int n = 0;
	string s;
       	cin>>n;
	cin>>s;
	int sum = 0;
	for(int i=0; i<s.length()-1; i+=2){
		if(s[i] == 'a'){
			if(s[i+1] == 'a'){
				s[i] = 'b';
				sum++;
			}
		}
		else{
			if(s[i+1] == 'b'){
				s[i] = 'a';
				sum++;
			}
		}
	}	
	cout<<sum<<endl<<s<<endl;
}
