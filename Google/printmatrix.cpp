#include <iostream>
#include <vector>

using namespace std;

void print(vector< vector<int> > &m){
	for(int i=0; i<m.size(); i++){
		cout<<"[ ";
		for(int j=0; j<m[i].size(); j++) cout<<m[i][j]<<",";
		cout<<"],"<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	int m;
	cin>>m;
	vector< vector<int> > matrix(n, vector<int>(m, -8));
	print(matrix);	

}
