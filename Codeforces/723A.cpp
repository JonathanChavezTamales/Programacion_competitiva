#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int> v(3);
	cin >> v[0] >> v[1] >> v[2];
	int max = 0, min = 101;
	for(int i=0; i<3; i++){
		max = v[i] > max? v[i] : max;
		min = v[i] < min? v[i] : min;
	}
	cout<<max-min;
}
