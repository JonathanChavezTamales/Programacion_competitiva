//FIXME: https://brilliant.org/wiki/trailing-number-of-zeros/
//https://www.purplemath.com/modules/factzero.htm
//https://www.geeksforgeeks.org/count-trailing-zeroes-factorial-number/

#include <iostream>

using namespace std;

int Z(int n){
    int cont = 4;
    int ceros = 0;
    int j = 1;

    for(int i=0; i<n; i++){
        if(i%5==0)
            ceros++;
        if(ceros==cont+1){
            j++;
            cont+=4+j;
            ceros+=1;
        }
    }

    return ceros;
}

int main(){
    int x;
    cin>>x;
    cout<<Z(x)<<endl;
}