#include <iostream>

using namespace std;

int main(){
	int q;
	cin>>q;
	while(q--){
	long long int a, b;
	cin>>a>>b;
	long long int c = a-b;
	if(c >= 2){
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
	}
}
