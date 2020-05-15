#include <iostream>

using namespace std;

void solve(){
	int k;
	cin>>k;
	if(k&1 || k<4) cout<<"NO"<<endl;
	else cout<<"YES";
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	
	solve();
}
