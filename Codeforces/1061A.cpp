#include <iostream>

using namespace std;

int main(){
	int n;
	long int s;
	cin>>n>>s;
	int m = s/n;
	s %= n;
	while(s%n != 0){
		n--;
		m += s/n;
		s %= n;
	}

	cout<<m;
}
