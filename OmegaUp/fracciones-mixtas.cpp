#include <iostream>

using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    if(m%n==0){
        cout<<m/n;
    }
    else{
        cout<<m/n<<" "<<m%n<<"/"<<n;
    }
    
}