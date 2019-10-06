#include<iostream>
#include<vector>

using namespace std;

int main(){
	int n;
	cin>>n;
	if(n==1){
	cout<<n<<endl<<n;
	return 0;
	}
	int d = 2;
	while(n/d > 10){
		d++;
	}
	cout<<(n%d!=0 ? d+1 : d)<<endl;
	if(d*10== n)
		d = n;
	int res = 0;
	for(int i=0; i<d; i++){
		if(n%d!=0 && i==d-1)
			cout<<n/d + 1<<" ";
		else
			cout<<n/d<<" ";
	}
}
