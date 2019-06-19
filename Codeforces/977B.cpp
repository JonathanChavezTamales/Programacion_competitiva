#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	map<string, int> m;
	for(int i=1; i<n; i++){
		m[string() + s[i-1]+s[i]] += 1;
	}
	string max_string;
	int max = 0;
	for(auto it=m.begin(); it!=m.end(); it++){
		if(it->second > max){
			max = it->second;
			max_string = it->first;
		}
	}
	cout<<max_string;
}
