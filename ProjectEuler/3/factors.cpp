#include <iostream>
using namespace std;

void factors(long long int n){
	long long int i=2;
	long long int cn = n;
	while(n != 1 && i*i<= cn){
		if(n%i==0){
			cout<<i<<endl;

			n/=i;
		}
		else{
			i++;
		}
	}
}

int main(){
	long long int x;
	cin>>x;
	factors(x);
}
