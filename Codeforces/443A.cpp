#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	unordered_set<char> c;
	for(int i=1; i<s.length()-1; i+=3){
		c.emplace(s[i]);
	}
	cout << c.size();
}
