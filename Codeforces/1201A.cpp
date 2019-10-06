#include <iostream>
#include <set>
#include <vector>
#include <string>

using namespace std;

int main(){
	int n, m;
	cin>>n>>m;
	vector<int> pos;
	string fs;
	cin>>fs;

	for(int i=1; i<n; i++){
		cerr<<i<<endl;
		string s;
		cin>>s;
		for(int j=0; j<m; j++){
			cerr<<s[j]<<"=="<<fs[j]<<endl;
			if(s[j] == fs[j]){
				cerr<<s[j]<<endl;
				pos.push_back(j);
				cerr<<"pushed "<<i<<endl;
			}	
		}
	}

	cerr<<"fin de letras"<<endl;	
	int grading[m];
	int sum = 0;	
	for(int i=0; i<m; i++){
		cin>>grading[i];
		sum+= grading[i];
	}

	for(int i=0; i<pos.size(); i++){
		sum += grading[pos[i]];
	}
	cout<<sum;
}
