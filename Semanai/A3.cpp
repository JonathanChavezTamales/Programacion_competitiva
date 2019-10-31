#include<iostream>

using namespace std;
 
int main(){
    int t,n;
    cin>>n>>t;
    int r=INT_MAX,temp=-1;
    
    for(int i=1;i<=n;i++){
        int j,k;
	cin>>j>>k;
        if(j<t){
            while(j<t)
                j+=k;
        }
        if(j<r){
            r=j;
            temp=i;
        }
    }
    cout<<temp<<endl; 
}
