#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int cols, rows;
        cin>>rows>>cols;
        for(int j=0; j<rows; j++){
            for(int i=0; i<cols; i++){
                if(j%2 != 0){
                    if(i%2 == 0)
                        cout<<'.';
                    else
                        cout<<'*';
                }
                if(j%2 == 0){
                    if(i%2 == 0)
                        cout<<'*';
                    else
                        cout<<'.';
                }
            }
            cout<<endl;
        }
    }
}