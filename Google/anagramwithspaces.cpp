#include <iostream>
#include <string>

using namespace std;

bool anagram(string s){
	int left = 0, right = s.length()-1;
	while(left<right){
		if(s[right] == ' ' || s[left] == ' '){
			right = s[right] == ' ' ? right-1 : right;
			left = s[left] == ' ' ? left+1 : left;	
		}
		else{
			if(s[right] != s[left]){
				return false;
			}
			else{
				left++;
				right--;
			}
		}
	}
	return true;
}

int main(){
	string s;
	getline(cin, s);
	cout<<anagram(s);
}
