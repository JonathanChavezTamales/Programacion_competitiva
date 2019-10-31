#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
	int n;
	int k;
	cin>>n>>k;
	unordered_set<int> uniques;
	unordered_set<int> idxs;
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		if(uniques.find(x) == uniques.end()){
			uniques.insert(x);
			idxs.insert(i);
		}
	}
	if(uniques.size()>=k){
		cout<<"YES"<<endl;
		for(auto it=idxs.begin(); it!=idxs.end() && k>0; ++it){
			cout<<(*it)+1<<" ";
			k--;
		}
	}
	else{
		cout<<"NO"<<endl;
	}
}
