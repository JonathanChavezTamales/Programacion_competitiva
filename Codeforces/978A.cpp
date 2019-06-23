#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <stack>

using namespace std;

int main(){
	int n;
	cin>>n;
	int v[n];
	unordered_set <int> a;
	for(int i=0; i<n; i++){
		cin>>v[i];	
	}

	for(int i =n-1; i>=0; i--){
		a.insert(v[i]);
	}
	cout<<a.size()<<endl;
	for(auto it = a.begin(); it!=a.end(); it++){
		cout<<(*it)<<" ";
	}


}
