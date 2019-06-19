#include <iostream>

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	if(m%n==0){
		int x=m/n;
		int ops = 0;
		while(x!=1){
			if(x%2==0){
				x/=2;
				ops++;
			}
			else if(x%3==0){
				x/=3;
				ops++;
			}
			else{
				cout<<-1;
				return 0;
			}
		}
		cout<<ops;
	}
	else{
		cout<<-1;
	}
}
