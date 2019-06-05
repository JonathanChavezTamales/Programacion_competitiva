#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	int n,m;
	cin>>n>>m;
	vector<int> a(n);
	vector<int> b(m);

	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	for(int i=0; i<b.size(); i++){
		cin>>b[i];
		for(int j=0; j<a.size(); j++){
			clog<<b[i]<<" - "<<a[j]<<endl;
			if((b[i]+a[j])%2==1){
				clog<<"erased "<<b[i]<<" with "<<a[j]<<endl;
				b.erase(b.begin()+i);
				a.erase(a.begin()+j);
				i--;
				j--;
				break;
			}
		}
	}

	cout<<m-b.size();
	
}
