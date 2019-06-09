#include <iostream>

using namespace std;

int main(){
	int x;
	cin>>x;
	for(int i=1; i<=x; i++){
		for(int j=1; j<=x; j++){
			if(i%j==0 && i*j>x && i/j<x){
				cout<<i<<" "<<j;
				return 0;
			}
		}
	}

	cout<<-1;
}
