#include <iostream>

using namespace std;

int xorfib(int a,int b,int n){
	if(n == 0){
			return a;
		}
		else if(n == 1){
			return b;
		}
		else{
				return xorfib(a,b,n-1)^xorfib(a,b,n-2);

		}

}

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,n;
		cin>>a>>b>>n;
		cout<<xorfib(a,b,n)<<endl;
		}
}
