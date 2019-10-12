#include <iostream>
#include <unordered_set>

using namespace std;

void primes(int n){
	if(n < 2) return;
	unordered_set< int > notprimes;
	for(int i=2; i<=n; i++){
		if(notprimes.find(i) == notprimes.end()){
			cout<<i<<", ";
			for(int j=i*2; j<=n; j+=i){
				notprimes.insert(j);
			}
		}
	}	
}

int main(){
	int n;
	cin>>n;
	primes(n);
}
