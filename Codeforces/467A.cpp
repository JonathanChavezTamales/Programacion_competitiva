#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int roomsAvailable=0;
	while(n--){
		int p, c;
		cin>>p>>c;
		roomsAvailable += p < c-1;
	}
	cout << roomsAvailable;
}
