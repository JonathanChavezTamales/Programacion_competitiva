#include <iostream>

using namespace std;

int missing(int arr[], int n){
	int sum = 0;
	for(int i=0; i<n; i++){
		sum += arr[i];
		cerr<<sum<<endl;
	}
	int total_sum = n*(n+1)/2 + n+1;
	cerr<<sum<<" "<<total_sum<<endl;
	return total_sum-sum;
}

int main(){
	int q;
	cout<<sizeof(int);
	cin>>q;
	while(q--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		cout<<missing(a, n)<<endl;
	}
}
