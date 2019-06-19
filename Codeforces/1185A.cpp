#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector <int> a(3);
	int d;
	cin>>a[0]>>a[1]>>a[2]>>d;
	sort(a.begin(), a.end());
	int a01 = a[1]-a[0];
	int a12 = a[2]-a[1];
	int r = 0;
	if(a01 >= d){
		r+=d;
	}else{
		r+=a01;
	}
	if(a12 >= d){
		r+=d;
	}else{
		r+=a12;
	}
	
	if(r<(d*2)){
		cout<<d*2-r;
	}
	else{
		cout<<0;
	}
}
