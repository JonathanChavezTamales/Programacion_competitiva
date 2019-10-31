#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int q;
	cin>>q;
	while(q--){
		double l, r;
		cin>>l>>r;
		if((int)l&1){
			if((int)r&1) cout<<(int)(-l-(r-l)/2);
			else cout<<(int)(ceil((r-l)/2));
		}
		else{
			if((int)r&1) cout<<(int)(floor((l-r)/2));
			else cout<<(int)(l+(r-l)/2);
		}
		cout<<endl;
	}
}
