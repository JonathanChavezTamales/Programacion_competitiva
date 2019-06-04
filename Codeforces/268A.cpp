#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int t[n][2];
	int c=0;
	for(int i=0; i<n; i++){
		cin >> t[i][0] >> t[i][1];
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(t[i][0]==t[j][1])
				c++;
		}
	}

	cout<<c;
}
