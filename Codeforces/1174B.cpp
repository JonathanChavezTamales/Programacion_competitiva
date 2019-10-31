#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int odds = 0, evens = 0;
	while(n--){
		int x;
		cin>>x;
		if(x%2 == 0) evens++;
		else odds++;
	}
	if(evens > 0 && odds > 0){
		cout<<"YES"
	}
}
