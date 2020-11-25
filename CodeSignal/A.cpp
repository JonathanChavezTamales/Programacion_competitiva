#include <iostream>
#include <string>

using namespace std;

int threeCharsDistinct(std::string s) {
    int count = 0;
    int ss = s.size();
    for(int i=0; i<ss-2; i++){
        if(s[i] != s[i+1] && s[i] != s[i+2] && s[i+1] != s[i+2]) count++;
    }
    return count;
}

int main(){
	cout<<threeCharsDistinct("o");
}
