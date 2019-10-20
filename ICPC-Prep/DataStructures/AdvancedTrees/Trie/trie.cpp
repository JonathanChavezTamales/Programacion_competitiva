#include <iostream>
#include <string>
#include <vector>

#define ALPHABET_SIZE 26

using namespace std;

struct Node{
	Node* children[ALPHABET_SIZE] = {NULL};
	bool isEndOfWord = false;
};

void print(Node* root){
	for(int i=0; i<ALPHABET_SIZE; i++){
		if(root->children[i] != NULL){
			cout<<char('a'+char(i));
			print(root->children[i]);
		}
	}
	return;
}

void remove();

vector<string> autocomplete(Node* root, string search_term){	
}

void insert(Node* root, string s){
	if(s == "") return;
	else if(root->children[s[0] - 'a'] == NULL){
		root->children[s[0] - 'a'] = new Node();
	}
	insert(root->children[s[0] - 'a'], s.substr(1,s.length()-1));
}

int main(){
	Node* root = new Node();
	insert(root, "pizza");
	insert(root, "perro");
	insert(root, "perros");
	insert(root, "kuka");
	print(root);
}

