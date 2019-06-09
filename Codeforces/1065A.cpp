#include <iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long int a,b,c,d,chocs;
		cin>>a>>b>>c>>d;
		chocs = a/d;
		chocs += (chocs/b)*c;
		cout<<chocs<<endl;
	}
}
