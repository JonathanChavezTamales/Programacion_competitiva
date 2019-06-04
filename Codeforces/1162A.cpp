#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n,h,r;
	cin>>n>>h>>r;
	int spots[n];
	for(int i=0; i<n; i++){
		spots[i] = h;
	}
	while(r--){
		int l, r, x;
		cin>>l>>r>>x;
		for(int i=l-1; i<=r-1; i++){
			spots[i] = x;
		}
	}

	int suma = 0;
	for(int i=0; i<n; i++){
		suma+= pow(spots[i],2);
	}
	cout<<suma;
}
