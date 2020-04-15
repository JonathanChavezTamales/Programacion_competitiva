#include <iostream>

using namespace std;

long long int strangeGrid(long long int r, long long int c) {
    /*
     * Write your code here.
     */
    long long int k = (c-1)*2;
    if(r%2==0){
       k++;
    }
    
    k += ((r-1)/2)*10;

    cout<<k<<endl;

    return k;

}

int main(){
	cout<<strangeGrid(1000000011, 5)<<endl;
}
