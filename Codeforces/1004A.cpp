#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
	int n,d;
	cin>>n>>d;
	vector<int> cities(n);
	for(int i=0; i<n; i++){
		cin>>cities[i];
	}
	int total = 2;
	for(int i=0; i<n-1; i++){
		set <int> intermedias;
		for(int j=cities[i]+d; j<=cities[i+1]-d; j+=d){
			if(j>=cities[i]+d && j<=cities[i+1]-d){
				intermedias.insert(j);
				clog<<j<<endl;
			}
		}
		for(int j=cities[i+1]-d; j>=cities[i]+d; j-=d){
                       	if(j<=cities[i]-d && j>=cities[i+1]+d){
                                intermedias.insert(j);
                                clog<<j<<endl;
 			}
		}
		//No entiendo, del 11 al 18 con d=2 puede haber 13,14,15,16 ?

	}
}
