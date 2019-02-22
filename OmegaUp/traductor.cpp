#include <iostream>
#include <unordered_map>

int main(){
    std::unordered_map<int, int> m;
    int d, w;
    std::cin>>d>>w;
    for(int i=0; i<d; i++){
        int a,b;
        std::cin>>a>>b;
        m.insert(std::pair<int, int>(a, b));
    }
    int wi[w];
    for(int i=0; i<w; i++){
        std::cin>>wi[i];
    }
    for(int i=0; i<w; i++){
        if (m.count(wi[i]))
            std::cout<<m.at(wi[i])<<"\n";
        else
            std::cout<<"C?"<<"\n";
    }
}