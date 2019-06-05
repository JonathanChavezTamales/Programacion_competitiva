#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	char M[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>M[i][j];
		}
	}

	int x=0;

	for(int i=1; i<n-1; i++){
		for(int j=1; j<n-1; j++){
			if(M[i][j] == 'X'){
			if(M[i][j] == M[i-1][j-1]){
				if(M[i][j] == M[i-1][j+1]){
					if(M[i][j] == M[i+1][j-1]){
						clog<<"sdf"<<endl;
						if(M[i][j] == M[i+1][j+1]){
							x++;
						}
					}
				}
			}	
			}	
		}
	}

	cout<<x;
}
