#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

bool every_different(string x){
	unordered_set<char> s;
	for(int i=0; i<x.length(); i++){
		s.insert(x[i]);
	}
	return s.size() == x.length();
}

int main(){
	int a, b;
	cin>>a>>b;
	for(int i=a; i<= b; i++){
		if(every_different(to_string(i))){
			cout<<i<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;

}
