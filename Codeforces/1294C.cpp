#ifdef LOCAL
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
#include <list>
#include <climits>
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define debug_c(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<*it<<",";} cerr<<endl;
#define EPS 0.0000001
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif

using namespace std;

map<int, int> factors(int n){
    map<int, int> facs;

    while(n%2 == 0){ // Divide by two
        n /= 2;
        facs[2]++;
    }

    for(int i=3; i<=sqrt(n); i+=2){ // Now is odd, can skip even divisors
        while(n%i == 0){
            n /= i;
            facs[i]++;
        }
    }

    if(n>2){ // Is prime
        facs[n]++;
    }
	return facs;
}

void solve(){
	int n;
	cout<<fixed;
	cout.precision(0);
	cin>>n;
	map<int, int> facs = factors(n);
	if(facs.size() == 0){
		cout<<"NO"<<endl;
		return;
	}
	else if(facs.size() == 1){
		if(facs.begin()->second >= 6){
			int r = facs.begin()->first;
			cout<<"YES"<<endl<<r<<" "<<r*r<<" "<<pow(r, facs.begin()->second-3)<<endl;
		}
		else cout<<"NO"<<endl;
		return;
	}
	else if(facs.size() == 2){
		auto i1 = facs.begin();
		int a1 = i1->second;
		auto i2 = next(facs.begin());
		int a2 = i2->second;
		if(a1+a2 >= 4){
			cout<<"YES"<<endl;
			cout<<i1->first<<" "<<i2->first<<" ";
			cout<<pow(i1->first, (i1->second)-1) * pow(i2->first, (i2->second)-1)<<endl;
		}
		else{
			cout<<"NO"<<endl;
			return;
		}
	}
	else{
		vector<int> x(3);
		cout<<"YES"<<endl;
		int i= 0;
		for(auto it = facs.begin(); it!=facs.end(); it++){
			if(i<3){
				x[i] = pow(it->first, it->second);
			}
			else{
				x[2] *= pow(it->first, it->second);
			}
			i++;
		}
		for(int i=0; i<3; i++){
			cout<<x[i]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
