#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int c;
	cin >> c;
	vector<int> contest(c);
	int k = 1;
	for(int i=0; i<c; i++){
		cin >> contest[i];
	}
	
	sort(contest.begin(), contest.end());
	bool deletedOne = true;
	for(int i=0; i<c; i++){
		if(contest[i] >= k){
			k++;
			contest[i] = 0;
		}
	}

	cout << k-1;
}
