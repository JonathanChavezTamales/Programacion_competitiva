#include <iostream>

using namespace std;

int gcd_lcm_factorization(int a, int b){
	int d = 2;
	int gcd = 1;
	int lcm = 1;
	while(a>1 || b>1){
		if(a%d == 0 && b%d==0){
			gcd *= d;
			lcm *= d;
			a /= d;
			b /= d;	
		}
		else if(a%d == 0){
			a /= d;
			lcm *= d;
		}
		else if(b%d == 0){
			b /= d;
			lcm *= d;
		}
		else{
			d++;
		}
	}
	return gcd;
}

int gcd(int a, int b){
	if(a == 0) return b;
	return gcd(b%a, a);
}


int main(){
	cout<<gcd_lcm_factorization(89088923, 53812923)<<endl;
	cout<<gcd(89096883, 59112923)<<endl;
}
