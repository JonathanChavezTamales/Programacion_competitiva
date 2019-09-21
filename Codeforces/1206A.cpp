#include <iostream>

using namespace std;

int main(){
	int n,m;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	cin>>m;
	int b[m];
	for(int i=0; i<m; i++)
		cin>>b[i];

	for(int i=0; i<n; i++){
		for(int j =0; j<m; j++){
			int sum = a[i]+b[j];
			for(int k = 0; k<n; k++){
				if(a[k] == sum){
					break;
				}
			}
			for(int k = 0; k<m; k++){
				if(b[k] == sum){
					break;
				}
			}
			cout<<
		}
	}
}
