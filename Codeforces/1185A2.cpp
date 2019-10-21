#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	vector<int> a(3);
	cin>>a[0]>>a[1]>>a[2];
	int d;
	cin>>d;
	sort(a.begin(), a.end());
	int sum = 0;
	sum += a[1]-a[0] >= d ? 0 : d-(a[1]-a[0]);
	sum += a[2]-a[1] >= d ? 0 : d-(a[2]-a[1]);


	cout<<sum<<endl;
}
