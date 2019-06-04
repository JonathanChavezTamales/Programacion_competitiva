#include <iostream>

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<"#";
		}
		cout<<endl;
		i++;
		if(i>=n)
			break;
		for(int j=0; j<m-1; j++){
			cout<<".";
		}
		cout<<"#"<<endl;
		i++;
		if (i>=n)
			break;
		for(int j=0; j<m; j++){
			cout<<"#";
		}
		cout<<endl;
		i++;
		if(i>=n)
			break;
		cout<<"#";
		for(int j=0; j<m-1; j++){
			cout<<".";
		}
		cout<<endl;
	}
}
