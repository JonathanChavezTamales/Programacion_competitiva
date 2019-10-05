#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	vector<int> a(4);
	int res = 0;
	for(int i=0; i<4; i++){
		cin>>a[i];
		res += a[i];
	}
	if(res%2 != 0){
		cout<<"NO"<<endl;
		return 0;
	}
	else if(find(a.begin(), a.end(), res/2) != a.end()){
		cout<<"YES"<<endl;
	}
	else if(a[0]+a[1]== res/2 || a[0]+a[2] == res/2 || a[0]+a[3] == res/2){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	
}
