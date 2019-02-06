#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     double a,b,c;
     cin>>a>>b>>c;
     a *= .2;
     b *= .3;
     c *= .5;
     cout.precision(1);
     cout<<"MEDIA = "<<fixed<<a+b+c<<endl;
 
    return 0;
}
