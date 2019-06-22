#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		long long int x;
		cin>>x;
		int sum = 0;
		while(x!=1){
			if(x%2==0){
				x/=2;
			}
			else if(x%3==0){
				x = 2*x/3;
			}
			else if(x%5==0){
				x = 4*x/5;
			}
			else{
				sum = -1;
				break;
			}
			sum++;
		}
		cout<<sum<<endl;
	}
}
