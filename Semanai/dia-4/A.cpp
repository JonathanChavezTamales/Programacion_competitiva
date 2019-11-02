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


#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define debug_c(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<*it<<",";} cerr<<endl;
#define FOR(i,f,t) for(int i=f; i<(int)t; ++i)


using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	int sum = 0;
	while(n>0){
		debug(n);
		if(n-100 >= 0){
			sum++;
			n -= 100;
		}
		else if(n-20 >= 0){
			sum++;
			n -= 20;
		}	
		else if(n-10 >= 0){
			sum++;
			n -= 10;
		}
		else if(n-5 >= 0){
			sum++;
			n -= 5;
		}
		else if(n-1 >= 0){
			sum++;
			n -= 1;
		}
	}

	cout<<sum<<endl;
}
