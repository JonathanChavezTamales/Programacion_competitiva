#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, k;
	cin>>n>>k;
	vector<int> p(n);
	int sum = 0;
	for(int i=0; i<n; i++){
		cin>>p[i];
		sum += p[i];
		int reps = 0;
		if(sum > k){
			int reversesum = 0;
			reps++;
			for(int j=i-1; j>=0; j--){
				reversesum += p[j];
				if(sum-reversesum <= k){
					break;
				}else reps++;
			}
		}
		cout<<reps<<" ";
	}
}
