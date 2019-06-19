#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		string a, b;
		bool bq = true;
		cin>>a>>b;
		vector <char> aset(a.length());
		for(int i=0; i<a.length(); i++){
			aset[i] = a[i];
		}
		for(int i=0; i<b.length(); i++){
			if(a.find(b[i]) == a.npos || ){
				bq=false;
			}
		
			auto it = find(aset.begin(), aset.end(),b[i]);
			if(it != aset.end()){
				aset.erase(it);
			}
		}
		for(int i=0; i<aset.size(); i++)
			clog<<aset[i];
		if(aset.size() == 0 && bq){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}	
}
