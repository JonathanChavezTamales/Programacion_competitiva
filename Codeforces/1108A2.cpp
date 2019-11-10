#include <iostream>

using namespace std;

int main(){
	int q;
	cin>>q;
	while(q--){
		int l1, r1, l2, r2;
		cin>>l1>>r1>>l2>>r2;
		if(min(l1,l2) == l1){
			cout<<l1<<" "<<min(r1,r2)<<endl;
		}
		else{
			cout<<min(r1,r2)<<" "<<l2<<endl;	
		}
	}
}
