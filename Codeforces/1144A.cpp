#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		string res = "Yes";
		sort(s.begin(), s.end());
		for(int i=0; i<s.length()-1; i++){
			if(s[i]+1 != s[i+1]){
				res = "No";
				break;
			}
		}
		cout<<res<<endl;
	}
}
