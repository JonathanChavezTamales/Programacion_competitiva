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
	int n;
	cin>>n;
	vector<long int> a(n);
	vector<int> negs(n);
	long long int sumnegs = 0;
	long long int negprods = 0;
	long long int posprods = 0;
	for(int i=0; i<n; i++){
		cin>>a[i];
		if(a[i] < 0) sumnegs++;
		negs[i] = sumnegs;
		if(sumnegs&1) negprods++;
		else posprods++;
	}
	long long int negstemp = negprods;
	long long int postemp = posprods;
	for(int i=1; i<n; i++){	
		if(a[i-1] < 0){
			negstemp--;
			swap(negstemp, postemp);	
		}
		else{
			postemp--;
		}
		negprods += negstemp;
		posprods += postemp;
	}
	cout<<negprods<<" "<<posprods<<endl;
	
}
