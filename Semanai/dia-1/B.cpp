#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int k;
	cin>>k;
	int p = 0, n = 0, z = 0;
	for(int i=0; i<k; i++){
		int x;
		cin>>x;
		if(x > 0) p++;
		else if (x < 0) n++;
		else z++;
	}
	
	if(p*1.0>=ceil(k*1.0/2)) cout<<1<<endl;
	else if(n*1.0>=ceil(k*1.0/2)) cout <<-1<<endl;
	else cout<<0<<endl;
}
