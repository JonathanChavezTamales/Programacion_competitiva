#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
	string name;
	cin>>name;
	set<char> uniques;
	for(int i=0; i< name.length(); i++){
		uniques.insert(name[i]);
	}
	if(uniques.size()%2 == 0){
		cout << "CHAT WITH HER!";
	}	
	else{
		cout << "IGNORE HIM!";
	}
}
