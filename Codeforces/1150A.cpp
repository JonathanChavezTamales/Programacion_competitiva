#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int n, m, r;
	cin >> n >> m >> r;
	vector<int> a(n);
	vector<int> b(m);
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i =0; i<m; i++){
		cin>>b[i];
	}
	int morning = *min_element(a.begin(), a.end());
	int evening = *max_element(b.begin(), b.end());

	if(morning < evening){
		int ss = r/morning;
		int change = r%morning;
		cout<<ss*evening+change;

	}
	else
		cout<<r;
}
