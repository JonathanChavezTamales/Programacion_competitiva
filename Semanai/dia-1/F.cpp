#include <iostream>
#include <deque>

using namespace std;

int main(){
	int n;
	int k;

	cin>>n>>k;
	deque<int> d;


	for(int i=0; i<n; i++){
		cerr<<i<<endl;
		int x;
		cin>>x;
		d.push_back(x);
	}
	bool ended = false;
	while(!ended && d.size() != 0){
		if(d.back() <= k){ cerr<<d.back()<<" <= "<<k<<endl; d.pop_back();} 
		else if(d.front() <= k){  d.pop_front(); cerr<<"pf"<<endl; }
		else ended = true;
	}
	cout<<n-d.size()<<endl;
}
