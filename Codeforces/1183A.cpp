#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	string x;
	cin>>x;
	bool found = false;
	while(!found){
		int sum = 0;
		for(int i=0; i<x.length(); i++){
			sum += x[i] - '0';
		}
		cerr<<sum<<endl;
		if(sum%4 ==0){
			cout<<x<<endl;
			return 0;
		}
		else{
			x = to_string(stoi(x)+1);
			cerr<<"new x:"<<x<<endl;
		}
	}
}
