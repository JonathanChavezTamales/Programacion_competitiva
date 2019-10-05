#include <iostream>
#include <string>
#include <algorithm>

#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;

using namespace std;

int main(){
	int n, k;
	cin>>n>>k;
	string x;
	cin>>x;
	
	if(k == 0){
		cout<<x<<endl; return 0;
	}
	else if(x.length() == 1) {
		cout<<0<<endl; return 0;
	}	
	string res = "";
	for(int i=0; i<n; i++){
		int lowerb = i == 0 ? 1 : 0;
		if(lowerb != x[i] - '0'){
			int c = k <= 0 ? x[i] - '0' : lowerb;
			res += to_string(c);
			k--;
		}
		else res += x[i];
	}
	cout<<res<<endl;
}
