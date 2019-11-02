#include <iostream>

using namespace std;

int main(){
	long long int n;
	cin>>n;
	long long int x, y;
	cin>>x>>y;
	if((x-1 + y-1) <= (n-x + n-y)){
		cout<<"White";
	}
	else cout<<"Black";
}
