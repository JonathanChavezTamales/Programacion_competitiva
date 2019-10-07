#include <iostream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main(){
	int n;
	int x[10] = {0};
	cin>>n;
	string s;
	cin>>s;
	for(int i=0; i<n; i++){
		int j = 0;
		if(s[i]=='L'){
			while(x[j]!=0){
				j++;
			}
			x[j] = 1;
		}
		else if(s[i]=='R'){
			j = 9;
			while(x[j]!=0){
				j--;
			}
			x[j] = 1;

		}
		else{
			x[s[i]-'0'] = 0;
		}
	}
	for(int i=0; i<10; i++){
		cout<<x[i];
	}
}
