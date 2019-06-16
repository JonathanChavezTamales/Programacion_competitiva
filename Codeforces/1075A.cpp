#include <iostream>
#include <cmath>

using namespace std;

int main(){
	long long int n,x,y;
	cin>>n>>x>>y;
	int b,w;
	w = sqrt(pow(x-1,1) + pow(y-1, 1));
	b = sqrt(pow(n-x,1) + pow(n-y, 1));

	clog<<w<<" "<<b;
	if(w<=b){
		cout<<"White";
		return 0;
	}
	else{
		cout<<"Black";
	}
}
