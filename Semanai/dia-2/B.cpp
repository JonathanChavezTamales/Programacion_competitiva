#include <iostream>

using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int x, y, z;
	cin>>x>>y>>z;
	x-=a;
	if(x<0){
		cerr<<"fails a";
		cout<<"NO";
	}
	else{
		y+=x;
		y-=b;
		if(b<0){
			cerr<<"fails b";
			cout<<"NO";
		}
		else{
			z+=y;
			z-=c;
			if(c<0){
				cerr<<c;
				cout<<"NO";
			}
			else{
				cout<<"YES";
			}
		}
	}
}
