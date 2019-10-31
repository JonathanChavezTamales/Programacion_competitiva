#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	int q;
	cin>>q;
	while(q--){
		string s, t;
		cin>>s>>t;
		vector< pair<char, int> > reps1;
		vector< pair<char, int> > reps2;
		char last = s[0];
		int ps = 1;
		for(int i=1; i<s.length(); i++){
			if(s[i] != last){
				reps1.push_back(make_pair(last, ps));
				last = s[i];
				ps = 1;
			}	
			else ps++;
		}
		reps1.push_back(make_pair(last, ps));
		
		last = t[0];
		ps = 1;
		for(int i=1; i<t.length(); i++){
			if(t[i] != last){
				reps2.push_back(make_pair(last, ps));
				last = t[i];
				ps = 1;
			}	
			else ps++;
		}
		reps2.push_back(make_pair(last, ps));

		bool found = true;
		if(reps1.size() != reps2.size()){
			found = false;
		}
		else{
			for(int i=0; i<reps2.size() && found; i++){
				if(reps1[i].first != reps2[i].first || reps1[i].second > reps2[i].second){
					cerr<<"got here"<<endl;
					found = false;
				}
			}
		}	
		if(found) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
