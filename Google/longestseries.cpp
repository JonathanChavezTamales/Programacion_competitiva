#include <iostream>
#include <vector>

using namespace std;

int longest(const vector<int> &arr){
	int maxi = 1;
	int c = 1;
	int idx = 0;
	int final_idx = 0;
	for(int i=1; i<arr.size(); i++){
		if(arr[i] == arr[i-1]+1){
			c++;
		}
		else{
			c=1;
			idx = i;
		}
		
		if(c > maxi){
			maxi = c;
			final_idx = idx;
		}
	}
	return idx;
}

int main(){
	vector<int> x {1,2,3,4,3,2,2,4,4,2,3,7,8,9,10,11,12,13,14,15};
	cout<<longest(x);
}
