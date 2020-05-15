#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(int k){
    int n, b;
    cin>>n>>b;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    int i=0;
    int c = 0;
    while(b>0 && i<n){
        b -= a[i];
        i++;
        if(b >= 0){
         c++;   
        }
        else break;
    }
    cout<<"Case #"<<k<<": "<<c<<endl;
}

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++) solve(i+1);
}
