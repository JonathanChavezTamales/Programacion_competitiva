#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	int n, v;
	cin>>n>>v;
	int t = 1;
	int sum = 0;
	int i=1;
	while(n-i+1 > t){
		t--;
		int r = min(v-t, n-i);
		sum += r*i;
		t += r;
		i++;
	}
	cout<<sum<<endl;
	
}
