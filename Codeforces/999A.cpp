#include <iostream>
#include <deque>

using namespace std;

int main(){
	int n, k;
	cin>>n>>k;
	deque<int> dq;
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		dq.push_back(x);
	}
	while(dq.size()>0){
		if(k>=dq.front()){
			dq.pop_front();
		}
		else if(k>=dq.back()){
			dq.pop_back();
		}
		else{
			break;
		}
	}
	cout<<n-dq.size()<<endl;
}
