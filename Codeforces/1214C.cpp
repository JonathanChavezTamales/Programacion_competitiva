#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int score = 0;
	bool able = true;
	for(int i=0; i<n; i++){
		if(score == -2){
			able = false;
			break;
		}
		else if(s[i] == '('){
			score++;
		}
		else if(s[i] == ')'){
			score--;
		}
	}
	if(score != 0) able = false;
	if(able) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
