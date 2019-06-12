#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >>n;
	vector<long int> a;
	for(int i=0; i<n; i++){
		long int x;
		cin>>x;
		a.push_back(x);
	}
	int m;
	cin>>m;
	sort(a.begin(), a.end());
	for(int i=0; i<m; i++){
		int q;
		cin>>q;
		int sum = 0;
		for(int j=0; j<a.size(); j++){
			if(j != a.size()-q)
				sum+=a[j];
		}
		cout<<sum<<endl;
	}
}
