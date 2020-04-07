#include <iostream>

using namespace std;

int main(){
	int n = 1000;
	for(int i=0; i<=n; i++){
		//Generar sumados dan 1000-n (complemento)
		for(int j=0; j<=(1000-i)/2; j++){
			cout<<i<<", "<<j<<", "<<(1000-i)-j<<endl;
			if(j*j+(1000-i-j)*(1000-i-j) == i*i){
				return 0;
			}
		}	
	}
}
