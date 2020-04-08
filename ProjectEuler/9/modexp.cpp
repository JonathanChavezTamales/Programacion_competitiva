#include <iostream>

using namespace std;


int summingSeries(long long int n) {
    /*
     * Write your code here.
     */
     9803332417649065

     unsigned long long int r = (n%(1000000007) * n%(1000000007) ) % 1000000007;
     return r;

}

int main(){
	cout<<summingSeries(5773408242017850);
}
