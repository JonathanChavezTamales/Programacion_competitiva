#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int q;
	cin>>q;
	while(q--){
		long int a,b;
		cin>>a>>b;
		int cantidad = b-a+1;
		if(a%2 == 0){
			if(cantidad %2 == 0){
				cout<<cantidad/2*-1;
			}
			else{
				cout<<(cantidad/2*-1)+b;
			}
		}
		else{
			if(cantidad%2 == 0){
				cout<<cantidad/2;
			}
			else{
				cout<<cantidad/2-b;
			}
		}
		cout<<endl;
	}

}
