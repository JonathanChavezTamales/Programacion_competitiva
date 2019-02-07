#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int x1,x2,y1,y2,a1,a2,b1,b2,x,y;
    cin>>x1>>y1>>x2>>y2;
    int area1 = abs(x2-x1)*abs(y2-y1);
    cin>>a1>>b1>>a2>>b2;
    int area2 = abs(a2-a1)*abs(b2-b1);
    
    //Posibilidades

    //AAXX y XXAA
    if (a2<x1 || x2<a1){
        x = 0;
    }
    //AXAX
    else if (a1<x1 && x1<a2 && a2<x2){
        x = a2-x1;
    }
    //XAXA
    else if (x1<a1 && a1<x2 && x2<a2){
        x = x2-a1;
    }
    //XAAX
    else if (x1<a1 && x2>a2){
        x = a2-a1;
    }
    //AXXA
    else if (a1<x1 && a2>x2){
        x = x2-x1;
    }


    if (b2<y1 || y2<b1){
        y = 0;
    }
    //AXAX
    else if (b1<y1 && y1<b2 && b2<y2){
        y = b2-y1;
    }
    //XAXA
    else if (y1<b1 && b1<y2 && y2<b2){
        y = y2-b1;
    }
    //XAAX
    else if (y1<b1 && y2>b2){
        y = b2-b1;
    }
    //AXXA
    else if (b1<y1 && b2>y2){
        y = y2-y1;
    }


    int area3 = x*y;
    
    cout<<area1+area2-area3;
}