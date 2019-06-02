#include <iostream>
#include <string>

using namespace std;

int main(){
	int n, m=0;
	cin>>n;
	string s;
	cin >> s;
	if(s.length() == 0){
		cout<< 0 << "";
		return 0;
	}
	bool isbad = true;
	while(isbad){
		isbad = false;
		for(int i=0; i<s.length()-1; i+= 2){
			if(s[i] == s[i+1]){
				s.erase(s.begin()+i+1);
				m++;
				isbad = true;
			}
		}
	}
	if(s.length()%2!=0){
		s.erase(s.end()-1);
		m++;
	}
	cout << m <<endl <<s;
}
