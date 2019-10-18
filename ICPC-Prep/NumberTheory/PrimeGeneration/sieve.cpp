#include <iostream>
#include <vector>

using namespace std;

vector<int> primes(int n){
	vector<bool> sieve(n+1, 1);
	vector<int> primes;
	int i=2;
	while(i<=n){
		if(sieve[i]==1){
			primes.push_back(i);
			for(int j=2*i; j<=n; j+=i){
				sieve[j] = 0;
			}
		}
		i++;
	}
	return primes;
}

vector<int> optimized_primes(int n){
	vector<bool> sieve(n+1, 1);
	vector<int> primes;
	int i=2;
	while(i*i<=n){
		if(sieve[i]==1){
			for(int j=i*i; j<=n; j+=i){
				sieve[j] = 0;
			}
		}
		i++;
	}
	for(int i=2; i<=n; i++){
		if(sieve[i]) primes.push_back(i); 
	}
	return primes;
}


int main(){
	vector<int> primos = optimized_primes(80);
	for(int i: primos) cout<<i<<",";
}
