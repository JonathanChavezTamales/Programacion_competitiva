#include <iostream>
#include <cmath>
//////Librerias
//
using namespace std;

void solve(){
	int a, b, c;
	cin>>a>>b>>c;
	cout.precision(0);
	cout<<fixed;
	cout<<ceil(1.0*c*(a-b)/(double)b)<<endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);


	solve();
}
