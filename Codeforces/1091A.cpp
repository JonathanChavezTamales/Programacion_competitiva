#include <iostream>

using namespace std;

int main(){
	int r,g,b;
	cin>>r>>g>>b;
	if(b <= g+1 && b <= r+2){
		g = b-1;
		r = b-2;
	}
	else if(g <= r+1 && g <= b-1){
		b = g+1;
		r = g-1;
	}
	else if(r <= g-1 && r <= b-2){
		b = r+2;
		g = r+1;
	}
	cout<<r+g+b;
}
