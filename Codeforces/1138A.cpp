#include <iostream>

using namespace std;

int main(){

	int n;
	cin>>n;
	int max = 0;
	int dos = 0, uno =0;
	int last;
	while(n--){
		int x;
		cin>>x;
		if(last != x){
			if(last == 1)
				dos = 0;
			else
				uno = 0;
		}
		last = x;
		if(x == 2){
			dos++;
		}
		else{
			uno++;
		}
		clog<<"unos "<<uno<<"dos "<<dos<<endl;
		max = min(uno, dos)*2 > max ? min(uno, dos)*2 : max;
	}

	cout<<max;

}
