#include <iostream>
#include <algorithm>

#ifdef LOCAL
#define debug(x) cerr<<"["<<#x<<"]: "<<x<<endl;
#else
#define debug(x) 42;
#endif

using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];
	int mayor1 = *min_element(arr, arr+n);
	int mayor2 = mayor1;
	for(int i=0; i<n; i++){
		if(arr[i]>mayor1){
			mayor2 = mayor1;
			mayor1 = arr[i];
		}
	}
	cout<<mayor2<<endl;

}
