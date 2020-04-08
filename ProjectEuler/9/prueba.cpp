
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <map>

using namespace std;


map<long long int, long long int> m;

unordered_set<long long int> get_unique_factors(long long int n){
    unordered_set<long long int> unique;
    long long int div = 2;
    while(n!=1 && div*div <= n){
        if(n%div==0){
            n/=div;
            unique.insert(div);
        }
        else{
            div++;
        }
    }
    if(n>2){
	unique.insert(n);
    }
    return unique;
}

int prime_count(long long int  n) {
	long long int mx = 0;
	long long int start=1;

	auto it = m.lower_bound(n);
	if(it!=m.begin()){
		start = (--it)->first;
		mx = (--it)->second;
	}

       	for(int i=start; i<=n; i++){
		if(m.find(i) == m.end()){
			m[i] = get_unique_factors(i).size();
		}
		mx = max(mx, m[i]);
	}
	return mx;	
}

int main() {
   /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   int a;
  cin>>a;
  cout<<prime_count(a);
}
