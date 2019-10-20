#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> scores(vector<string> titles, vector<string> bodies, vector<string> queries){
	vector<int> scores(queries.size());
	for(string q: queries){
		int current_score = 0;
		for(string title : titles){
			size_t s = title.find(q);
			while(s != string::npos){
				current_score += 10;
			}
		}

		for(string body : bodies){
			size_t s2 = body.find(q);
			while(s != string::npos){
				current_score += 1;
			}

		}
		scores.push_back(current_score);
	}
	return scores;
}

int main(){
	cout<<scores({"ANIMAL", "DOG FACTS"}, {"ANT ANTELOPE CAMEL CAT DOG", "FURRY FURRY LOYAL"}, {"AN", "DO", "FUR", "ELEPH"});
}
