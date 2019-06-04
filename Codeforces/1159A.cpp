#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int r = 0;
	for(int i=0; i<n; i++){
		if(s[i] == '-'){
			if(r>0){
				r--;
			}
		}
		else{
			r++;
		}
	}
	cout<< r;
}
