#include <iostream>
#include <set>
#include <vector>
#include <string>

using namespace std;

int main(){
	int n, m;
	vector <set<string>> a;
	cin>>n>>m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			string x;
			cin>>x;
			a[j].insert(x);
		}
	}
	cout<<a[2].size();
}
