#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int res = 0, pares = 0, impares = 0;
	int n;
	cin>>n;
	while(n--){
		int x;
		cin>>x;
		res += 1-abs(x);
		pares += x%2 == 0;
		impares += x%2 != 0;
	}
	cerr<<impares;
	res += impares%2 != 0 ? 2 : 0;
	cout<<res<<endl;
}
