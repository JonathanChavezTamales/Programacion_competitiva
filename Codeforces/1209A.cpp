#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <cmath>

using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	unordered_map<int, int> m;
	unordered_set<int> s;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		if(arr[i] == 1){
			m[1] = 1;
		}
		else if(m.find(arr[i]) == m.end()) {
			bool found = false;
			for(int j=2; j<sqrt(arr[i])+1 && !found; j++){
				if(arr[i]%j == 0){
					cerr<<"for"<<arr[i]<<"insert"<<j<<endl;
					m[arr[i]] = j;
					found = true;
					s.insert(j);
				}
			}
			if(!found){
				m[arr[i]] = arr[i];
				cerr<<"inserted prime"<<arr[i]<<endl;
				s.insert(arr[i]);
			}
		}
	}
	for(auto it = s.begin(); it != s.end(); it++){
		cerr<<*it<<endl;
	}
	
	cout<<s.size()<<endl;

}
