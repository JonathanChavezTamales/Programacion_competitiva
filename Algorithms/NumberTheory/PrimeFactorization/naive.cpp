#include <iostream>
#include <vector>

using namespace std;

vector<int> primeFactors(int n){
	vector<int> factors;
	int d = 2;
	while(n>1){
		if(n%d == 0){
			factors.push_back(d);
			n /= d;
		}
		else d++;
	}
	return factors;
}

int main(){
	for(int i: primeFactors(1092)){
		cout<<i<<", ";
	}
}
