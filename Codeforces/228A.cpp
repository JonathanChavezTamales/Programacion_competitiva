#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
	unordered_set<int> s;
	int c;
	for(int i=0; i<4; i++){
		cin >> c;
		s.emplace(c);
	}
	cout<<4-s.size();
}
