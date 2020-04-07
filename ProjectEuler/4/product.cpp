#include <iostream>

using namespace std;

bool isPalindrome(int n){
	string s = to_string(n);
	for(int i=0; i<s.length(); i++){
		if(s[i] != s[s.length()-1-i])
			return false;
	}
	return true;
}

int main(){
	int a = 999;
	int b = 999;
	int prod = 0;
	int largest = 0;
	for(int i=a; i>=100; i--){
		for(int j=b; j>=100; j--){
			cout<<i<<","<<j<<" "<<i*j<<endl;
			if(isPalindrome(i*j)){
				if(i*j > largest){
					largest = i*j;
				}
			}
		}
	}

	cout<<largest<<endl;
}
