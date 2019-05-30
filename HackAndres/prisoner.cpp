#include <iostream>

using namespace std;

int main(){
	int t, n, m, s;
	cin >> t;
	for(int i=0; i<t; i++){
		cin>> n >>m >>s;
		cout<<n/m+s-1;
	}
}
