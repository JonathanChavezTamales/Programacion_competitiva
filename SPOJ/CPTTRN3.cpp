#include <iostream>
#define loopi(n) for(int i=0; i<n; i++)
#define loopj(n) for(int j=0; j<n; j++)


using namespace std;

void figura(){
    int x, y;
    cin>>x>>y;
    loopi(x*3+1){
        loopj(y*3+1){
            if(i%3==0)
                cout<<'*';
            else{
                if(j%3==0)
                    cout<<'*';
                else
                    cout<<'.';
            }
        }
        cout<<endl;
    }
}


int main(){
    int n;
    cin>>n;
    while(n--){
        figura();
    }
}
