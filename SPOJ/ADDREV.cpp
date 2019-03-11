#include <iostream>
#include <sstream>
#include <deque>
#include <string>

using namespace std;

string reverse(string x){
    string r;
    for(int i=x.length()-1; i>=0; i--){
        r+=x[i];
    }
    return r;
}

int reversedSum(string a, string b){
    int x, y;
    stringstream(reverse(a)) >> x;
    stringstream(reverse(b)) >> y;
    int r;
    stringstream(reverse(to_string(x+y))) >> r;
    return r;
    
    
}

int main(){
    int n;
    cin>>n;
    string a, b;
    while(n--){
        cin>>a>>b;
        cout<<reversedSum(a,b)<<endl;
    }
    
}