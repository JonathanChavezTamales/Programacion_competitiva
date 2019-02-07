#include <iostream>

using namespace std;

int main(){
    char name[15];
    double salary, sales;
    cin>>name>>salary>>sales;
    sales *= .15;
    salary += sales;
    cout.precision(2);
    cout<<"TOTAL = R$ "<<fixed<<salary<<endl;
}