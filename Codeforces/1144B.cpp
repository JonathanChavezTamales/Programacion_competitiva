#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	int pares = 0, impares = 0;
	for(int i=0; i<n; i++){
		cin>>a[i];
		if(a[i]%2==0)
			pares++;
		else
			impares++;
	}
	sort(a.begin(),a.end());
	bool turnoPar = true;

	for(int i=a.size()-1; i>=0 || ( pares!=0 && impares!=0 ) ; i--){
		if(a[i]%2==0 && pares>0 && turnoPar){
			clog<<a[i]<<endl;
			a.erase(a.begin()+i);
			pares--;
			turnoPar = false;
		}
		else if(a[i]%2!=0 && impares>0 && !turnoPar){
			clog<<a[i]<<endl;
			a.erase(a.begin()+i);
			impares--;
			turnoPar = true;
		}
		else{
			i++;
		}	
	}

	int sum = 0;
	for(int i=0; i<a.size(); i++)
		sum += a[i];

	cout<<sum;
	
}
