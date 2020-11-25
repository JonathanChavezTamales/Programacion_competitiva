#include <iostream>
#include <vector>
#include <map>


using namespace std;

int main(){
	int n, q;
	cin>>n>>q;
	vector<vector<int>> m(n+1, vector<int>(n+1, 0));
	for(int i=0; i<q; i++){
		char c;
		int a, b;
		cin>>c;
		map<int, int> maxi;
		pair<int, pair<int, int> > maxg = make_pair(0, make_pair(0,0));
		bool maxg_mul = false;
		if(c=='R'){
			cin>>a>>b;
			m[a][b]++;
			if(maxi.find(a) != maxi.end()) maxi[a] = max(m[a][b], maxi[a]);
			else maxi[a] = 1;
			cout<<maxi.size()<<endl;
		}
		else if(c == 'Q'){
			int mx =0;
			int mxidx =
			for(int j=1; j<n+1; j++){
				if()
			}
		}
		else if(c == 'B'){
			if(maxg_mul) cout<<"Multiple"<<endl;
			if(maxg.first == 0) cout<<"No info"<<endl;
			else cout<<maxg.second.first<<" "<<maxg.second.second<<endl;
		}
	}
}
