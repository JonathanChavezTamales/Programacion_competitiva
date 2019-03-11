//FIXME: https://www.geeksforgeeks.org/factorial-large-number/

#include <iostream>
#define loopi(n) for(int i=0; i<n; i++)
#define loopj(n) for(int j=0; j<n; j++)

typedef unsigned long long int ulli;


using namespace std;

ulli factorial(ulli n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return(n*factorial(n-1));
}

int main(){
    int n;
    cin>>n;
    int x;
    while(n--){
        cin>>x;
        cout<<factorial(x)<<endl;
    }
}