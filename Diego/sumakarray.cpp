#include <iostream>

using namespace std;

int main(){
	int arr[] = {1,3,5,6,3,2,6,8,5};
	int k = 0;
	int total = 0;
	cin>>k;
	for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
		for(int j=i+1; j<sizeof(arr)/sizeof(arr[0]); j++){
			if(arr[i]+arr[j]==k){
				cout<<"{"<<arr[i]<<", "<<arr[j]<<"}"<<endl;
				total++;
			}
		}
	}
	cout<<total<<endl;
}
