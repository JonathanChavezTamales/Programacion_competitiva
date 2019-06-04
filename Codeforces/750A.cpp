#include <iostream>

using namespace std;

int main(){
	int n, m;
	cin >> n >>m;
	m = 240-m;
	int max_p = 0;
	int acum = 0;
	for(int i=1; i<=n; i++){
		acum += i*5;
		if(acum > m)
			break;
		max_p++;
	}
	cout<<max_p;

}
