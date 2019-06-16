#include<iostream>

using namespace std;

int main(){
	int q;
	cin>>q;
	w: while(q--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		bool found  =false;
		for(int i=a; i<=b && !found; i++){
			for(int j=c; j<=d && !found; j++){
				if(i!=j){
					cout<<i<<" "<<j<<endl;
					found = true;
				}
			}
		}
	}

}
