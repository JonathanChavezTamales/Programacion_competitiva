#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int x,y,z,t1,t2,t3;
	cin>>x>>y>>z>>t1>>t2>>t3;
	int tE = t2*(abs(x-z)+abs(x-y)) + 3*t3;
	int tP = abs(x-y)*t1;
	if(tE <= tP)
		cout<<"YES";
	else
		cout<<"NO";
}
