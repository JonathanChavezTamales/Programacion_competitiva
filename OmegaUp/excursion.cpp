#include <iostream>

int main(){
    int c,p;
    std::cin>>c>>p;
    int ci[c],pi[p];
    for(int i=0; i<c; i++) std::cin>>ci[i];
    for(int i=0; i<p; i++) std::cin>>pi[i];
    for(int i=0; i<p; i++) std::cout<<ci[pi[i]-1]<<std::endl;

}