#include <iostream>
#include <string>

using namespace std;

bool esWena(string a, string b){
	bool wena = true;
		for(int i=0; i<a.length()-1; i++){
			for(int j=0; j<b.length(); j++){
				if(b[j] != a[i]){
					if(b[j] != a[i+1]){
						clog<<b[j];
						return false;
					}
				}

			}
		}
		return true;
}

int main(){
	int n;
	cin>>n;
	while(n--){
		string a,b;
		cin>>a>>b;
		cout<<esWena(a, b);
	}
}
