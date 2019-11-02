#include <iostream>
#include <cmath>

using namespace std;
int gcd(int a, int b) { return b ? gcd(b, a%b) : a; }
int main(){
	int t;
	cin>>t;
	while(t--){
		int a, b;
		cin>>a>>b;
		if(a==0 || b==0) cout<<"Infinite"<<endl;
		if(gcd(a,b) > 1) cout<<"Infinite"<<endl;
		else cout<<"Finite"<<endl;
	}
}
