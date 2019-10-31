#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main(){
	int q;
	cin>>q;
	while(q--){
		int n;
		cin>>n;
 		unordered_set<int> x, y;
		for(int i=0; i<n; i++){
			int a;
			cin>>a;
			if(x.find(a+1) == x.end() && x.find(a-1) == x.end()){
				x.insert(a);
			}
			else{
				y.insert(a);
			}
		}
			
		if(y.empty()) cout<<1<<endl;
		else cout<<2<<endl;
	}
}
