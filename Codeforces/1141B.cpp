#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	int max = 0;
	int cmax = 0;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	for(int i=0; i<n; i++){
		if(a[i]==1){
			cmax++;
			max = cmax > max ? cmax : max;
		}
		else{
			cmax = 0;
		}
	}

	for(int i=0; i<n; i++){
		if(a[i]==1){
			cmax++;
			max = cmax > max ? cmax : max;
		}
		else{
			cmax = 0;
		}
	}
	
	cout<<max;

}
