#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n, k;
	cin>>n>>k;
	vector<int> w;
	for(int i = 0; i<n; i++){
		int x;
		cin>>x;

		
		if(find(w.begin(), w.end(), x) == w.end()){
			if(w.size()<k){
				w.insert(w.begin(), x);
			}
			else{
				cerr<<endl;
				w.pop_back();
				w.insert(w.begin(), x);
			}		
		}
	}
	cout<<w.size()<<endl;
	for(int i: w){
		cout<<i<<" ";
	}
	cout<<endl;

}
