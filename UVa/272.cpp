#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	int ocs = 0;
	while(getline(cin,s)){
		for(int i=0; i<s.length(); i++){
			if(s[i]=='\"'){
				if(ocs&1){
					cout<<"''";
				}
				else{
					cout<<"``";
				}
				ocs++;
			}	
			else{
				cout<<s[i];
			}
		}
		cout<<endl;
	}
}
