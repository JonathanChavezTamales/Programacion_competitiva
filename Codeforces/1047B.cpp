#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int max = 0;
	while(n--){
		int x,y;
		cin>>x>>y;
		max = x+y > max ? x+y : max;
	}
	cout<<max;
}
