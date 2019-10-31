#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n, k;
	cin>>n>>k;
	cout<<(int)(ceil(n*2.0/k)+ceil(n*5.0/k)+ceil(n*8.0/k));
}
