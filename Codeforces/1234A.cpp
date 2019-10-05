#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int q;
	cin>>q;
	while(q--){
		int n;
		cin>>n;
		int sum = 0;
		for(int i=0; i<n; i++){
			int a;
			cin>>a;
			sum+=a;
		}
		cout.precision(0);
		cout<<fixed<<ceil(1.0*sum/n)<<endl;
	}
}
