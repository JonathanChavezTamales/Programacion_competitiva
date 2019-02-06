#include <iostream>
using namespace std;

int main(){
	double pi = 3.14159;	
	double r;
	cin>>r;
	double a = pi*r*r;
	cout.precision(4);
	cout<<"A="<< fixed << a<<endl;
}

