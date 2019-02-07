#include <iostream>

using namespace std;

int main(){
  int f, c, v;
  cin>>f>>c>>v;
  int d = f*c;
  if (v<d){
    cout<<v<<" "<<0;
  }
  else{
    cout<<d<<" "<<v-d;
  }

}