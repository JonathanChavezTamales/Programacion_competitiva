#include <iostream>

using namespace std;

int main(){
	int q;
	cin>>q;
	while(q--){
		int n;
		cin>>n;
		int sum = 0;
		while(n--){
			int x;
			cin>>x;
			sum += x <= 2048 ? x : 0;
		}
		if(sum >= 2048) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

