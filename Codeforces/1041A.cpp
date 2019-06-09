#include <iostream>
#include <set>
#include<algorithm>

using namespace std;

int main(){
	int n;
	cin>>n;
	set<int> a;
	while(n--){
		int k;
		cin>>k;
		a.insert(k);
	}
	int max = *max_element(a.begin(), a.end());
	int min = *min_element(a.begin(), a.end());
	cout<<max-min-1-(a.size()-2);
}
