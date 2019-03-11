#include <iostream>
#include <cmath>

using namespace std;

bool esPrimo(int n){
    if(n==1)
        return false;
    if(n==2)
        return true;
    for(int j=2; j<=sqrt(n)+1; j++){
            if(n%j==0)
                return false;
    }
    return true;
}

void calculaPrimos(int n, int m){
    for(int i=n; i<=m; i++){
        if(esPrimo(i)){
            cout<<i<<endl;
        }
    }
}

int main(){
    int n;
    cin>>n;
    while(n--){
        int a, b;
        cin>>a>>b;
        calculaPrimos(a,b);
    }
}