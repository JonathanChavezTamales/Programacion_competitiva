#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int x){
	if(x < 2) return false;
	for(int i=2; i<x; i++){
		if(x%i == 0) return false;
	}
	return true;
}

bool isPrimeSqrt(int x){
	if(x<2) return false;
	for(int i=2; i<sqrt(x)+1; i++){
		if(x%i == 0) return false;
	}
	return true;
}

int main(){
	int n;
	cin>>n;
	cout<<isPrimeSqrt(n)<<endl;
	cout<<isPrime(n);
}
