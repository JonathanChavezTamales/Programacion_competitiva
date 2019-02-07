#include <iostream>

using namespace std;

int main(){
    double x,y;
    cin>>x>>y;
    if(x==0){
        if(y==0){
            cout<<"Origem";
        }
        else
        {
            cout<<"Eixo Y";
        }
        
    }
    else if(x>0){
        if(y==0){
            cout<<"Eixo X";
        }
        if(y>0){
            cout<<"Q1";
        }
        else{
            cout<<"Q4";
        }
    }
    else{
        if(y==0){
            cout<<"Eixo X";
        }
        if(y>0){
            cout<<"Q2";
        }
        else{
            cout<<"Q3";
        }
    }

    cout<<endl;
}

