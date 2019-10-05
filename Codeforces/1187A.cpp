#include <iostream>

using namespace std;

int main(){
	int q;
	cin>>q;
	while(q--){
		int n,a,b;
		cin>>n>>a>>b;
		if(a+b <= n){
			cout<<max(a,b)+1<<endl;
		}
		else{
			cout<<min(min(a,b), n*2-a-b)+1<<endl;
		}
	}
}
