#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int mini = 0;
		int maxi = 0;
		string s;
		cin>>s;
		for(int i=0; i<s.length(); i++){
			if(s[i] == '1'){
				if(mini == 0){
					mini = i+1;
				}
				maxi = i+1;
			}
		}
		cerr<<mini<<","<<maxi<<endl;
		if(mini == 0) cout<<n<<endl;
		else cout<<max(n-mini+1, maxi)*2<<endl;
	}
}
