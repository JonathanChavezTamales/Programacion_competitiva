#include <vector>
#include <iostream>
using namespace std;

int main(){
	int b, k;
	cin>>b>>k;
	vector<int> a(k);
	for(int i=0; i<k; i++){
		cin>>a[i];
	}
	if(b%2==0){
		if(a[k-1]%2 == 0){
			cout<<"even";
		}
		else cout<<"odd";
	}
	else{
		int odds = 0;
		for(int i=0; i<k; i++){
			if(a[i]%2!=0){
				odds++;
			}
		}
		if(odds%2 == 0){
			cout<<"even";
		}
		else cout<<"odd";
	}
}
