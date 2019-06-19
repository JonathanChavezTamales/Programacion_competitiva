#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, m;
	vector <int> t(n);
	cin>>n>>m;
	int sum = 0;
	int last;
	for(int i=0; i<n; i++){
		cin>>t[i];
		if(sum + t[i] <= m){
			sum += t[i];
			last = i;
		}
	}
	vector <int> alcanzan(last+1);
	for(int i=0; i<alcanzan.size(); i++){
		alcanzan[i] = t[i];
		clog<<0<<" ";
	}
	sort(alcanzan.begin(), alcanzan.end());
}
