#include <iostream>
#include <string>

int main(){
    std::string s;
    std::cin>>s;
    for(int i=0 ; i<s.length() ; i++){
        if(s[i]!=s[s.length()-1-i]){
            std::cout<<"No";
            return 0;
        }
    }
    std::cout<<"Si";
}