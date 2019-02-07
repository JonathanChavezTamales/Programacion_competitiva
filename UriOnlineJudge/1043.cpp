#include <iostream>

using namespace std;

int main(){
    double a,b,c;
    cin>>a>>b>>c;
    cout.precision(1);
    if (a>b && a>c){
        if (a < b+c){
            cout<<"Perimetro: = "<<fixed<<a+b+c;
        }
        else{
            cout<<"Area = "<<fixed<<(a+b)*c/2;
        }
    }
    if (b>a && b>c){
        if (b < a+c){
            cout<<"Perimetro: = "<<fixed<<a+b+c;
        }
        else{
            cout<<"Area = "<<fixed<<(a+b)*c/2;
        }
    }
    if (c>b && c>a){
        if (c < b+a){
            cout<<"Perimetro: = "<<fixed<<a+b+c;
        }
        else{
            cout<<"Area = "<<fixed<<(a+b)*c/2;
        }
    }
    cout<<endl;
}