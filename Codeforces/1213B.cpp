#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		int mp = a[n-1];
		int days = 0;
		for(int i=n-1; i>=0; i--){
			if(mp < a[i]) days++;
			else if(a[i] < mp) mp = a[i];
		}
		cout<<days<<endl;
	}
}
