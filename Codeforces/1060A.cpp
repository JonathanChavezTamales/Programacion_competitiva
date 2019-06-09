#include<iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	vector<int> eights;
	for(int i=0; i<n; i++){
		if(s[i] == '8')
			eights.push_back(i);
	}
	int p=0;
	int erases=0;
	for(int i=0; i<s.length(); i++){
		if(s[i]!='8'){
			s.erase(s.begin()+i);
			erases++;
		}
		if(erases%10==0){
			p++;
			s.erase()
		}
		clog<<erases;
	}
	cout<<p;
}
