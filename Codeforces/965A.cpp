#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double k,n,s,p;
	cin>>k>>n>>s>>p;
	cout<<(int) (ceil(ceil(n/s)*k/p))<<endl;
}
