#include <iostream>

using namespace std;

int main(){
	int k,n,m;
	cin>>k>>m>>n;
	int cost = k*n*(n+1)/2;
	if(m-cost < 0){
		cout << cost-m;
	}
	else{
		cout<<0;
	}
}
