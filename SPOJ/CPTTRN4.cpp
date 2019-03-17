#include <iostream>
#define loopi(n) for(int i=0; i<n; i++)
#define loopj(n) for(int j=0; j<n; j++)


using namespace std;

int main(){
    int y,x,h,w,n;
    cin>>n;
    while(n--){
        cin>>y>>x>>h>>w;
        loopi(y*h+y+1){
            loopj(x*w+x+1){
                if(i%(h+1)==0)
                    cout<<'*';
                else if(j%(w+1)==0)
                    cout<<'*';
                else
                    cout<<'.';
            }
            cout<<endl;
        }
    }
}