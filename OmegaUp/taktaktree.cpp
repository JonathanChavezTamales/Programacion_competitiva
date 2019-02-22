#include <iostream>

int main(){
    int f, d=0;
    std::cin>>f;
    while(f%11!=1){
        f*=2;
        d++;
    }
    std::cout<<d<<" "<<f;
}