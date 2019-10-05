#include <iostream>

#ifdef LOCAL
#define debug(x) cerr<<#x<<": "<<x<<endl;
#endif

using namespace std;

int main(){
	int n;
	cin>>n;
	int i = 0;
	int m[n][n];
	int cont = 0;

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			m[i][j] = cont++;
		}
	}

	int nm[n][n];

	for(i=0; i<n; i++){
		for(int j=0; j<n; j++){
			nm[j][n-i-1] = m[i][j];
		}
	}



	for(int i=0; i<sizeof nm / sizeof nm[0]; i++){
		for(int j=0; j<sizeof nm[0] / sizeof nm[0][0]; j++){
			cout<<nm[i][j]<<" | ";
		}
		cout<<endl;
	}

}
