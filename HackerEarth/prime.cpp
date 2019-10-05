#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int numbers[n][2];
	for(int i=0; i<n; i++){
		numbers[i][0] = i+1;
		if(numbers[i][0] == 1)
			numbers[i][1] = 0;
		else
			numbers[i][1] = 1;
	}

	for(int i=0; i<n; i++){
		if(numbers[i][1]){
			cout<<numbers[i][0]<<endl;
			for(int j=i+numbers[i][0]; j<n; j+=numbers[i][0]){
				numbers[j][1]=0;
			}
		}
	}
}
