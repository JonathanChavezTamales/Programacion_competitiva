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
	int x;
	cin>>x;
	debug(x);
	bool turn = 1;
	int ops = 0;
	while((x&(x+1)) != 0 && ops <=40){
		ops++;
		if(turn){
			double temp = ~x;
			int temp2 = ((((int) temp+64)^x)+1)/2-1;
			debug(temp2);
			cout<<log2(((int) temp2+1));
			x = temp2^x;
			debug(x);
		}
		else{
			x++;
		}
		turn = !turn;
	}
	cout<<ops;
}
