#include <iostream>
#include <vector>

using namespace std;

int binary_s(const vector<int> &arr, int n){
	int left = 0; int right = arr.size()-1;
	int mid;
	while(left <= right){
		mid = (right+left)/2;
		if(arr[mid] == n) return mid;
		else if(arr[mid] > n) right = mid-1;
		else left = mid+1;
	}
	return -1;
}


int main(){
	vector<int> arr{1,2,3,4,5,6,7,8};
	int n = 9;
	cout<<binary_s(arr, n)<<endl;
	for(int i : arr){
		cout<<i<<",";
	}
}
