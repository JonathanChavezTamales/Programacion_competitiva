#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, t;
	cin>>n>>t;
	vector<vector<int> > multiples(n, vector<int>(0));
	for(int i=0; i<n; i++){
		int x, y;
		cin>>x>>y;
		int prod = x;
		while(prod <= t*t*t){
			multiples[i].push_back(prod);
			prod += y;
		}

		

	}

	int idx = 0;
	int difference = INT_MAX;

	for(int i=0; i<n; i++){
			for(int j=0; j<multiples[i].size(); j++){
				cerr<<multiples[i][j]<<",";
				if(abs(multiples[i][j]-t) < difference){
					idx = i;
					difference = abs(multiples[i][j]-t);
				}
			}
			cerr<<endl;
	}
	cout<<idx+1<<endl;
}
