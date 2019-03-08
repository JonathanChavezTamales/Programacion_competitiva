#include <iostream>
using namespace std;
int main(){
    int n, x, y;
    cin>>n;
    while(n--){
        cin>>x>>y;
        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                if(i==0 || i==x-1)
                    cout<<'*';
                else if(j>0 && j<y-1)
                    cout<<'.';
                else
                    cout<<'*';
            }
            cout<<endl;
        }
    }
}