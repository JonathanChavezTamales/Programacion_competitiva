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
#include <cctype>

#ifdef LOCAL
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define debug_c(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<*it<<",";} cerr<<endl;
#else
#define debug(x) 42
#define debug_c(a) 42
#endif

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int q;
	cin>>q;
	while(q--){
		int n;
		cin>>n;
		int minx = INT_MIN, miny = INT_MIN, maxx = INT_MAX, maxy = INT_MAX;
		while(n--){
			int x, y;
			bool a,b,c,d;
			cin>>x>>y>>a>>b>>c>>d;
			minx = a == 0 ? max(x,minx) : minx;
			miny = d == 0 ? max(y,miny) : miny;
			maxx = c == 0 ? min(x,maxx) : maxx;
			maxy = b == 0 ? min(y,maxy) : maxy;

			
			minx = minx > 1E5 ? 1E5 : minx;
			minx = minx < -1E5 ? -1E5 : minx;
			miny = miny > 1E5 ? 1E5 : miny;
			miny = miny < -1E5 ? -1E5 : miny;
			maxx = maxx > 1E5 ? 1E5 : maxx;
			maxx = maxx < -1E5 ? -1E5 : maxx;
			maxy = maxy > 1E5 ? 1E5 : maxy;
			maxy = maxy < -1E5 ? -1E5 : maxy;
		}
		if(minx > maxx || miny > maxy){
			cout<<0<<endl;
		}
		else{
			cout<<1<<" "<<maxx<<" "<<miny<<endl;
		}
	}
}
