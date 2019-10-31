#include <iostream>
#include <string>

using namespace std;

int main(){
	int q;
	cin>>q;
	while(q--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int i=0, j=s.size()-1;
		int min = s[i];
		while(s[j] <= min && j>i){
			j--;
			min = 0;
		}
		if(j == i) cout<<"NO"<<endl;
		else{
			cout<<"YES"<<endl;
			cout<<2<<endl;
			cout<<s[i]<<" ";
			for(int k=i+1; k<s.size(); k++){
				cout<<s[k];
			}
			cout<<endl;
		}
	}
}
