#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, t;
	cin>>n>>t;
	vector<vector<int> > a(n, vector<int>(0));
	for(int i=0; i<n; i++){
		cerr<<i<<endl;
		int s, d;
		cin>>s>>d;
		a[i].push_back(s);
		bool crossed = false;
		if(s>t) crossed = true;
		while(!crossed){
			s += d;
			a[i].push_back(s);
			if(s>t) crossed = true;
		}
	}

	int minidx = 0;
	int mindis = INT_MAX;
	bool caca = false;

	for(int i=0; i<n; i++){
		int j = a[i].size() == 1 ? 0 : a[i].size()-2; 
		for(; j<a[i].size(); j++){
			cerr<<a[i][j]-t<<", ";
			if(abs(a[i][j]-t) < mindis){
				mindis = abs(a[i][j]-t);
				cerr<<"MENOOR DIIF"<<endl;
				minidx = i;
				if(mindis == 0) caca = true;
			}
			if(caca) break;
		}
		if(caca) break;
		cerr<<endl;
	}

	cout<<minidx+1;
}
