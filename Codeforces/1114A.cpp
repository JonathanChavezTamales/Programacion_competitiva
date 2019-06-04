#include <iostream>

using namespace std;

int main(){
	int a,b,c,x,y,z;
	cin>>x>>y>>z;
	cin>>a>>b>>c;
	a-=x;
	if(a<0){
		cout << "NO";
		return 0;
	}
	b+=a;

	b-=y;
	if(b<0){
		cout<<"NO";
		return 0;
	}
	c+=b;
	c-=z;
	if(c<0){
		cout<<"NO";
		return 0;
	}
	cout<<"YES";

}
