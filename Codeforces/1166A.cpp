#include<iostream>
#include <string>
#include <map>

using namespace std;

int main(){
	int n;
	cin>>n;
	map<char, int> p;
	while(n--){
		string name;
		cin>>name;
		p[name[0]] += 1;
	}
	int suma = 0;
	for(auto it=p.begin(); it!=p.end(); it++){
		int a = ((it->second)/2);
		int b = (a + (it->second)%2);
		suma += (a-1)*a/2 + (b-1)*b/2;
	}
	cout<<suma;
	
}
