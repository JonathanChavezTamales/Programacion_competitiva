#include <iostream>

using namespace std;

int main(){
    int t;  //test cases
    cin>>t;
    while(t--){
        int n; //number of objects in scene
        cin>>n;
        while(n--){
            char o;
            int xmax=-1000, ymax=-1000, xmin=1000, ymin=1000;
            cin>>o;
            if(o=='l'){
                int x1,y1,x2,y2;
                cin>>x1>>y1>>x2>>y2;
                if(x1<xmin)
                    xmin=x1;
                if(x2>xmax)
                    xmax=x2;
                if(y1<ymin)
                    ymin=y1;
                if(y2>ymax)
                    ymax=y2;
            }
            else if(o=='c'){
                int x, y, r;
                cin>>x>>y>>r;
                if(x+r > xmax)
                    xmax=x+r;
                if(x-r < xmin)
                    xmin=x-r;
                if(y+r > ymax)
                    ymax=y+r;
                if(y-r < ymin)
                    ymin=y-r;
            }
            else if(o=='p'){
                int x, y;
                cin>>x>>y;
                if(y<ymin)
                    ymin=y;
                if(y>ymax)
                    ymax=y;
                if(x<xmin)
                    xmin=y;
                if(x>xmax)
                    xmax=x;
            }

            cout<<xmin<<" "<<ymin<<" "<<xmax<<" "<<ymax<<endl;
        }
    }
}