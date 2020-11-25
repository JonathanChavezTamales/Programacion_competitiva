#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> a = {1};
	auto lb1 = lower_bound(a.begin(), a.end(), 4);
	auto lb2 = lower_bound(a.begin(), a.end(), 0);
	cout<<(lb1-a.begin())<<endl;
	cout<<(lb2-a.begin())<<endl;
}
