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

//Hacer ifdef para solo declarar debug en local y hacer otro debug de string


#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#define debug_c(a) for(auto it=a.begin(); it!=a.end(); ++it) {cerr<<*it<<",";} cerr<<endl;
#define FOR(i,f,t) for(int i=f; i<(int)t; ++i)


using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	long long int sum = 0;
	long int nes = 0, pos = 0, z = 0;
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		if(x > 0){
			pos++;
			sum += x-1; 
		}
		else if(x < 0){
			nes++;
			sum += abs(x)-1;
		}
		else{
			z++;
		}
	}	

	if(nes&1){
		if(z>0){
			cout<<sum+z<<endl;
		}
		else{
			cout<<sum+2<<endl;
		}
	}
	else{
		cout<<sum+z<<endl;
	}

}
