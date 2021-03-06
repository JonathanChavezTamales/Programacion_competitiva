#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <deque>
#include <sstream>


#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define debug_c(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<*it<<",";} cerr<<endl;
#define FOR(i,f,t) for(int i=f; i<(int)t; ++i)


using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin>>n;

	int unos = 0, dos = 0;
	int last = 0, changes = 0;

	int res = 0;

	while(n--){
		int x;
		cin>>x;
		if(x == 1) unos++;
		else dos++;


		if(last != x){
			changes++;
			last = x;
		}

		if(changes&1){
			res = max(min(unos,dos), res);	
		}
		else{
			res = max(min(unos, dos), res);
			if(last == 1) dos = 0;
			else unos = 0;
		}
	}

	cout<<res*2<<endl;

}

