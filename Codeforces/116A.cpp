#include <iostream>

using namespace std;

int main(){
	int n;
	cin >>n;
	int current = 0;
	int max = 0;
	while(n--){
		int a, b;
		cin >>a>>b;
		current += b-a;
		max = current > max ? current : max;
	}

	cout << max;
}
