#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int s[n];
    int total = 0;
    for(int i=0; i<n; i++){
        cin>>s[i];
        if (s[i]%3 == 0){
            total++;
        }
    }
    if(total==0)
        cout<<"No hay triples.";
    else
        cout<<total<<"\n";
        for(int i=0; i<n; i++){
            if (s[i]%3 == 0){
                cout<<i+1<<" ";
            }
        }

}