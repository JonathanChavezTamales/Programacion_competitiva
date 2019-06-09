#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	//N-1 normalmente no sera multiplo de n, asi que es n - el mayor no multiplo y el mayor no multiplo es n-1 excepto cuando n-1 sea divisor de n, es decir n==2.
	n = n == 2? 2: 1;
	cout<<n;
}
