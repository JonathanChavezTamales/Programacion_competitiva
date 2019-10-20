#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int q;
	cin>>q;
	while(q--){
		int c,m,o;
		cin>>c>>m>>o;
		cout<<min(min(c,m),(o+c+m)/3)<<endl;
	}
}
