#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
	string s;
	cin>>s;
	int sum = ceil((s.length()*1.0-1)/2);
	for(int i=1; i<s.length(); i++){
		if(s[i] == '1' && (s.length()-1)%2==0) { sum++; break; }
	}
	cout<<sum<<endl;
}	
