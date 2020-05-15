#ifdef LOCAL
//////Librerias
#include "libs.h"
//////Debug
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define debuga(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<*it<<",";} cerr<<endl;
#define debugm(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<it->first<<","<<it->second<<endl;} cerr<<endl;
#else
#include <bits/stdc++.h>
#define debug(x) 42
#define debug_c(a) 42
#endif
//////Constantes
#define EPS 0.0000001
#define CHP 1000000007
#define endl '\n'
//////Funciones
#define MOD(n,k) ( ( ((n) % (k)) + (k) ) % (k))
#define forn(i,n) for (int i = 0; i < n; i++)
#define forr(i,a,b) for (int i = a; i <= b; i++)
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
//////Abreviaciones
#define pb push_back
#define fi first
#define se second
#define mp make_pair
//////Namespace
using namespace std;
//////Typedefs
typedef long long ll;
typedef pair<int, int> ii;
typedef map<int, int> mii;
typedef vector<ll> vi;

struct sg{

	public:
	int l;
	int r;
	int size;
	
	sg(int a, int b){
		l = a;
		r = b;
		size = r-l +1;
	}

	bool operator <(const sg &b) const{
		if(size == b.size){
			return l <= b.l;
		}
		else return size < b.size;
	}

};

class comp{
	public: 
		bool operator() (sg a, sg b){
			if(a.size == b.size) return a.l > b.r;
			return a.size < b.size;
		}
};

void solve(){
	int n;
	cin>>n;
	vector<int> a(n+1);
	priority_queue<sg, vector<sg>, comp> h;
	set<sg> st;
	sg x(1,n);
	h.push(x);
	st.insert(x);
	int i=1;
	while(!h.empty() && i<=n){
		sg c = h.top();
		h.pop();
		if((c.r-c.l+1)&1){
			a[(c.l+c.r)/2] = i;
			sg a1(c.l, (c.l+c.r)/2-1);
			sg a2((c.l+c.r)/2+1, c.r);
			if(st.find(a1) == st.end() && a1.r>=a1.l){ h.push(a1); st.insert(a1);
		       	}
			if(st.find(a2) == st.end() && a2.r>=a2.l){ h.push(a2); st.insert(a2); 
				}}
		else{
			a[(c.l+c.r-1)/2] = i;
			sg b1(c.l, (c.l+c.r-1)/2-1);
			sg b2((c.l+c.r-1)/2+1, c.r);
			if(st.find(b1) == st.end() && b1.r>=b1.l){ h.push(b1); st.insert(b1); 
			cerr<<b1.l<<","<<b1.r<<endl;}
			if(st.find(b2) == st.end() && b2.r >=b2.l){ h.push(b2); st.insert(b2); 
			cerr<<b2.l<<","<<b2.r<<endl;}
		}
		i++;
	}
	for(int i=1; i<=n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}


int main(){
	optimizar_io;
	int t;
	cin>>t;
	while(t--)
	solve();
}
