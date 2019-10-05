#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, pares = 0, impares = 0;
	cin>>n;
	while(n--){
		int i;
		cin>>i;
		if(i%2==0) pares++;
		else impares++;
	}
	cout<<min(impares, pares)<<endl;
}
