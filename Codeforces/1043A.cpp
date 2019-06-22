#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	int k = 0;
	int el = 0;
	for(int i=0; i<n; i++){
		cin>>a[i];
		el += a[i];
		k = a[i] > k ? a[i] :  k;
	}
	int  aw=0;
	while(aw<=el){
		aw =0;
		for(int i=0; i<n; i++){
			aw += k-a[i];
		}
		k++;
	}
	clog<<"aw "<<aw<<" el"<<el<<endl;
	cout<<--k;
}
