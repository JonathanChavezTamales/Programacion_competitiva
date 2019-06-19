#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isArithmetic(vector <int> a){
	int c = (a[1] - a[0] );
	for(int i=2; i<a.size(); i++){
		if(a[i] != a[0]+c*i){
			return false;
		}
	}
	return true;
}

int main(){
	int n;
	cin>>n;
	vector <int> a(n);
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	vector <int> a_original (a);
	sort(a.begin(), a.end());
	for(int i=0; i<n; i++){
		vector<int> b(a);
		int erased = b[i];
		b.erase(b.begin()+i);
		if(isArithmetic(b)){
			auto it = find(a_original.begin(), a_original.end(), erased);
			if(it!=a_original.end()){
				cout<<distance(a_original.begin(), it)+1;
				return 0;
			}
		}
	}
	cout<<-1;
}
