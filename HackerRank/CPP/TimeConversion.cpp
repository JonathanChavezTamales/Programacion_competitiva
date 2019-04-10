#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string time(string s){
	string militar = "";
	istringstream hora (s.substr(0,2));
	int horamilitar;
	hora >> horamilitar;
	cout << horamilitar%12 << "\n";
	//if(s.substr(8, 10) == "PM")
		horamilitar = horamilitar%12;
	cout << horamilitar;
	militar.append(to_string(horamilitar)).append(s.substr(2,6));
	return militar;
}

int main(){
	cout << time("12:05:45PM");
}
