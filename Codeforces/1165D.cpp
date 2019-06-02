#include <iostream>
#include <vector>

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >> n;
		int max = 0;
		vector<int> num(n);
		for(int i=0; i<n; i++){
			cin>>num[i];
			max = num[i] > max? num[i] : max;
		}
		bool alerta = false;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(num[i]/2 >= num[j]){
					if(num[i]%num[j]!=0){
						clog << "sfdsf" << num[i] << "%" << num[j]<<endl;
						alerta = true;
					}
				}
			}
		}

		if(alerta){
			cout << -1<< endl;
		}
		else{
			cout << max*2<<endl;
		}
	}
}
