#include <iostream>
#include <vector>
using namespace std;
vector<long long int> facts(15, 1);

int main(){
	for(int i=2; i<15; i++){
		facts[i] = i*facts[i-1];
	}
	long long int x;
	cin>>x;
	long long int sum = 0;
	int nd = 0;
	int j =0;
	for(int i=14; i>=0; i--){
		while(sum + facts[i] <= x){
			nd++;
			sum+=facts[i];
		}
	}
	cout<<nd<<endl;
}
