#include <iostream>
using namespace std;

int main(){
    int em_id, hours;
    double salary;
    cin>>em_id>>hours>>salary;
    cout.precision(2);
    cout<<"NUMBER = "<<em_id<<endl<<"SALARY = U$ "<<fixed<<hours*salary<<endl;
}