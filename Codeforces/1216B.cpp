#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main(){
	int n;
	cin>>n;
	vector< pair<int,int> > a(n);
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		a[i] = make_pair(x, i+1);
	}
	int sum = 0;
	sort(a.begin(), a.end(), greater<pair<int, int> >());
	for(int i=0; i<a.size(); i++)
		sum += a[i].first*i+1;
	cout<<sum<<endl;
	for(int i=0; i<a.size(); i++) cout<<a[i].second<<" ";
}
