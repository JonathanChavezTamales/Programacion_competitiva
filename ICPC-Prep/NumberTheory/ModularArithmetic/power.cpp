#include <iostream>
#include <cmath>

using namespace std;

int power(int x, unsigned int y, int p) 
{ 
    int res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or  
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p;   
    } 
    return res; 
}

int main(){
	cout<<power(5,2, 1E9+7)<<endl<<power(3, 200, 50)<<endl;
	cout<<"K"<<power(4,21,1E9+7)<<endl;
}
