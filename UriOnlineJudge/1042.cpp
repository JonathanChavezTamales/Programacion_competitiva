#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#define PI 3.14159
#define endl '\n'
typedef long long ll;
using namespace std;
//Template

void bubble(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<n; j++){
            if(arr[j-1]>arr[j]){
                int r = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = r;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int x[] = {a,b,c};
    bubble(x, 3);
    cout<<endl<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;



    return 0;
}