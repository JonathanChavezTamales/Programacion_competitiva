#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <limits>
#include <string>
#include <sstream>
#include <cmath>
#include <cctype>
#ifdef LOCAL
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define debuga(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<*it<<",";} cerr<<endl;
#define debugm(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<it->first<<","<<it->second<<endl;} cerr<<endl;
#else
#define debug(x) 42
#define debuga(a) 42
#define debugm(a) 42
#endif
#define endl '\n'
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
#define MAXN 100000001

using namespace std;

map<long long int, set<long long> > all_facs;

long long int len, sp[MAXN]; 
bool v[MAXN];

void sieve(){
	for (long long i = 2; i < MAXN; i += 2)	sp[i] = 2;//even numbers have smallest prime factor 2
	for (long long i = 3; i < MAXN; i += 2){
		if (!v[i]){
			sp[i] = i;
			for (long long j = i; (j*i) < MAXN; j += 2){
				if (!v[j*i])	v[j*i] = true, sp[j*i] = i;
			}
		}
	}
}

set<long long int> factors(long long int x) 
{ 
    set<long long int> ret; 
    while (x != 1) 
    { 
        ret.insert(sp[x]); 
        x = x / sp[x]; 
    } 
    return ret; 
} 


set<long long> factors2(long long n) {
	if(all_facs.find(n) != all_facs.end()){
		return all_facs[n];
	}
    set<long long> factorization;
    for (long long d = 2; d * d <= n; d++) {
        while (n % d == 0) {
            factorization.insert(d);
            n /= d;
        }
    }
    if (n > 1)
        factorization.insert(n);
    all_facs[n] = factorization;
    return factorization;
}

void solve(){
	int n, m, k;
	sieve();
	cin>>m>>n>>k;
	map<int, set<int> > adj;
	vector<long long int> nodes(n);
	map<long long int, long long int> ans;
	for(int i=0; i<n; i++){
		long long int x;
		cin>>x;
		debug(i);
		nodes[i] = x; 
	}
	for(int i=0; i<k; i++){
		int t, y, u;
		cin>>t>>y>>u;
		debug(i);
		adj[y].insert(t);
	}
	for(auto el:adj){
		long long int node = nodes[el.first-1];
		set<long long> factores = factors(node);
		
		debug(el.first);
		debuga(factores);

		auto ita = el.second.begin();
		auto itb = factores.begin();
		while(ita != el.second.end()){
			ans[*ita] = *itb;
			ita++;
			itb++;
		}
	}
	debugm(ans);
	for(auto el:ans){
		cout<<el.second<<" ";
	}
	cout<<endl;

}

int main(){
	optimizar_io;

	solve();
}
