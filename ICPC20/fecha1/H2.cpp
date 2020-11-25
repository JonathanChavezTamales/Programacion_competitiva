#ifdef LOCAL
//////Librerias
#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <string>
#include <cmath>
#include <sstream>
#include <climits>
#include <bitset>
#include <numeric>
//////Debug
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define debuga(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<*it<<",";} cerr<<endl;
#define debugm(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<it->first<<","<<it->second<<endl;} cerr<<endl;
#else
#include <set>
#include <iostream>
#include <vector>
#include <algorithm>
#define debug(x) 42
#define debug_c(a) 42
#define debuga(a) 42
#endif
//////Constantes
#define endl '\n'
//////Funciones
#define MOD(n,k) ( ( ((n) % (k)) + (k) ) % (k))
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
//////Abreviaciones
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define ll long long
//////Namespace
using namespace std;

void solve(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		vector<int> m(n);
		int aa =0;
		int ab =0;
		for(int i=0; i<n; i++){
			cin>>a[i];
			m[i] = a[i];
			if(i%2==0) aa += a[i];
			else ab += a[i];
		}
		set<int> idx;
		int x =0;
		sort(m.begin(), m.end(), greater<int>());
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(a[j] == m[i]){
					if(idx.find(j) == idx.end() && idx.find(j+1) == idx.end() && idx.find(j-1) == idx.end()){
					x+=a[j];
					idx.insert(j);
					}
				}
			}
		}
		debuga(idx);
		cout<<max(max(aa,ab), x)<<endl;
	}
}

int main(){
	optimizar_io;

	solve();
}
