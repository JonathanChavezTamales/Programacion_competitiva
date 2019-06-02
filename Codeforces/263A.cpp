#include <iostream>

using namespace std;

int main(){
	int matrix[5][5];
	int Px, Py;
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cin>>matrix[i][j];
			if(matrix[i][j] == 1){
				Px = j;
				Py = i;
			}
		}	
	}
	cout<<abs(Px-2)+abs(Py-2);

}
