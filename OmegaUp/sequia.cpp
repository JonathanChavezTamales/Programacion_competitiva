#include <iostream>

int main(){
    int n,c;
    std::cin>>n>>c;
    int p[n];
    for(int i=0;i<n; i++){
        std::cin>>p[i];
    }


    int suma = 0;
    int d;
    for(int i=0; i<n; i++){
        
        if(suma>=c){
            std::cout<<i;
            return 0;
        }
        suma +=p[i];
    }
}