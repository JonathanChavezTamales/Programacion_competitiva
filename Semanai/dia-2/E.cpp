#include <iostream>
#include <string>

using namespace std;

int main(){
	string a, b;
	cin>>a>>b;
	int vows = 0;
	if(a.length() == b.length()){
		for(int i=0; i<a.length(); i++){
			if(a[i] == 'a' || a[i] =='e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
				if(b[i] == 'a' || b[i] =='e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u'){
				}
				else{
					vows = 908;
					break;
				}
			}
			else{
				if(b[i] == 'a' || b[i] =='e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u'){
					vows = 987;
					break;
				}
			}
			
		}
		if(vows == 0) cout<<"Yes";
		else cout<<"No";
	}else cout<<"No";
}
