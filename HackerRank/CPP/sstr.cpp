#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    int q;
    cin>>n>>q;
    vector<vector<int> > a(n, vector<int>(0));
    cin>>ws;
    for(int i=0; i<n; i++){
	string s;
	getline(cin, s);
	string buffer = "";
	int c = 0;
	for(int j=0; j<s.length(); j++){
		if(s[j] != ' '){
			buffer += s[j];
		}
		else{
			if(c > 0){
			a[i].push_back(stoi(buffer));
			}
			c++;
			buffer = "";
		}
	}
	if(buffer != ""){
		a[i].push_back(stoi(buffer));
	}
    } 
    while(q--){
        int i, j;
        cin>>i>>j;
        cout<<a[i][j]<<endl;
    }
    return 0;
}
