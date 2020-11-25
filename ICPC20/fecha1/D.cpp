#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	int minidx = 0;
	for(int i=0; i<n; i++){
		cin>>a[i];
		if(a[i] < a[minidx]){
			minidx = i;
		}
	}
	int sw = 0;
	for(int sorted=0; sorted<n; sorted++){
		minidx = n-1;
		for(int i=sorted; i<n; i++){
			if(a[i] < a[minidx]){
				minidx = i;
			}
		}
		cout<<"minidx: "<<minidx<<endl;
		while(sorted!=minidx){
			cout<<"sort: "<<sorted<<endl;
			int newminidx = sorted;
			bool f = false;
			for(int i=minidx-1; i>=sorted; i--){
				if(a[i] < a[newminidx]){
					newminidx = i;
					f=true;
				}
			}
			if(1){
				cout<<"sw"<<a[newminidx]<<endl;
				a.push_back(a[newminidx]);
				a.erase(a.begin()+ newminidx);
				sw++;
			}
			minidx--;
		}
	}
	cout<<sw<<endl;
}
