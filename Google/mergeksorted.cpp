#include <iostream>
#include <vector>

using namespace std;

vector<int> merge_lists(vector< vector<int> > &m){
	vector<int> res;
	vector<int> counter(m.size(), 0);
	int maxes = 0;
	while(maxes < m.size()){
		int min_idx = 0;
		maxes = 0;
		for(int i=0; i<counter.size(); i++){
			if(counter[i] == INT_MAX) maxes++;
			if(counter[i] == m[i].size()-1){
				counter[i] = INT_MAX;
			}
			else{
				if(m[i][0] < m[min_idx][0]){
					min_idx = i;
				}
			}
		}
		if(maxes == m.size()) return res;
		res.push_back(m[min_idx][0]);
		counter[min_idx]++;
	}

	return res;
}

int main(){
	vector< vector<int> > z {{1,2,4,5,76,88}, {-234,34,44,66}, {2,4,6,8,10000}};
	vector<int> r = merge_lists(z);
	for(int i: r) cout<<i<<",";
}
