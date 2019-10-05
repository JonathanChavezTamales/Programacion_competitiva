#include <iostream>

using namespace std;

int rhombus(int n){
	if(n == 1){
		return 1;
	}
	else{
		return 4*n-4+rhombus(n-1);
	}
}

int main(){
	int a;
	cin>>a;
	cout<<rhombus(a)<<endl;
}
