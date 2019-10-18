#include <iostream>
#include <vector>

using namespace std;

vector<int> primeFactors(int n){
	vector<int> factors;
	int d = 2;
	while(n>1 && d*d <= n){
		if(n%d == 0){
			factors.push_back(d);
			n /= d;
		}
		else d++;
	}
	if(n>1){
		factors.push_back(n);
	}
	return factors;
}

int main(){
	for(int i: primeFactors(79)){
		cout<<i<<", ";
	}
}
