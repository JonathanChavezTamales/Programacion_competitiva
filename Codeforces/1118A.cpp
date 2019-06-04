#include <iostream>
typedef long long int lli;

using namespace std;

int main(){
	int q;
	cin>>q;
	while(q--){
		lli n, a, b;
		cin>>n>>a>>b;
		if(2*a<b){
			cout<<a*n<<endl;
		}
		else{
			cout<<n/2*b+n%2*a<<endl;
		}
	}
}
