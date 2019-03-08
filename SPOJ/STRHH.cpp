#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
    cin>>n;
	string s;
	while(n--){
        cin>>s;
		for(int i=0; i<s.length()/2; i+=2){
			cout<<s[i];
		}
		cout<<endl;
	}
}
