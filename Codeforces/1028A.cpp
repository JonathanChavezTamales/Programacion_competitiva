#include <iostream>
#include <string>

using namespace std;

int main(){
	int n, m;
	cin>>n>>m;
	for(int j=0; j<n; j++){
		string s;
		cin>>s;
		bool fin=false;
		int min_b=m;
		int max_b=0;
		for(int i=0; i<s.length(); i++){
			if(s[i]=='B'){
				fin = true;
				min_b = i<=min_b ? i : min_b;
				max_b = i>=max_b ? i : max_b;
			}
		}
		if(fin){
			clog<<max_b<<" - "<<min_b<<endl;
			cout<<(max_b-min_b)/2+j+1<<" "<<(max_b-min_b)/2+min_b+1;
			return 0;
		}
	}
}
