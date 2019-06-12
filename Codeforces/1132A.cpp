#include <iostream>
#include<string>
#include <vector>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a;
	while(n--){
		string name;
		cin>>name;
		a.push_back(name);
	}
}
