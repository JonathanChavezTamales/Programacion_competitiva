#include <iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,k;
		int sum=0;
		cin>>n>>k;
		if(k==1){
			sum = 1;
		}else{
		while(n!=0){
			cout<<n<<endl;
			n = n%k==0 ? n/k : n-1;
			sum ++;
		}}
		cout<<sum<<endl;
	}
}
