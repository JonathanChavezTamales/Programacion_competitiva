#include <iostream>

using namespace std;

int main(){
	int n, v;
	cin>>n>>v;
	int gas = 0;
	for(int i=0; i<n; i++){
		if(v>=n-1)
			cout<<n-1;
		else{
			gas = v;	
		}
	}
}
