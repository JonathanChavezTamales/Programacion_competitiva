#include <iostream>
#include <string>

using namespace std;

string reverse(string s){
	string a;
	for(int i=s.length()-1; i>=0; i--){
		a+=s[i];
	}
	return a;
}

int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int d=s.length();
	while(d!=0){
		for(int i=0; i<s.length()+1-d; i++){
			string rev = reverse(s.substr(i, d));
			string first =s.substr(0,i);
			string last = s.substr(i+d, s.length()-i+d-1);
			string ok = first+rev+last;
			if(ok < s){
				clog<<ok<<endl;
				cout<<"YES"<<endl<<i+1<<" "<<i+d;
				return 0;
			}
		}
		d--;
	}
	cout<<"NO";
}
