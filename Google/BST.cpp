#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;

	Node(int x){
		data = x;
	        left = NULL;	
		right = NULL;
	}
};

struct BST{
	Node* root;

	void inOrder(Node* root){
		if(root == NULL) return;
		inOrder(root->left);
		cout<<root->data<<",";
		inOrder(root->right);
	}


	void insert(int value){
		if(this->root == NULL) root = new Node(value);
		else{
			bool inserted = false;
			Node* current = root;
			while(!inserted){
				if(value <= current->data){
					if(current->left == NULL){
						current->left = new Node(value);
						inserted = true;
					}
					else{
						current = current->left;
					}
				}
				else{
					if(current->right == NULL){
						current->right = new Node(value);
						inserted = true;
					}
					else{
						current = current->right;
					}
				}
			}
		}
		return;
	}	
};

Node* insert(Node* root, int value){
	if(root == NULL){
		root = new Node(value);
		return root;
	}
	else if(value <= root->data){
		root->left = insert(root->left, value);
	}
	else{
		root->right = insert(root->right, value);
	}
	return root;
}

bool search(Node* root, int value){
	if(root == NULL) return false;
	else if(root->data == value) return true;
	else if(value <= root->data){
		return search(root->left, value);	
	}
	else{
		return search(root->right, value);	
	}
}

void levelOrder(Node* root){
	if(root == NULL) return;
	queue<Node* > s;
	s.push(root);
	while(!s.empty()){
		if(s.front() == NULL) s.pop();
		else{
			cout<<s.front()->data<<",";
			s.push(s.front()->left);
			s.push(s.front()->right);
			s.pop();
		}	
	}
	return;
}

int height(Node* root){
	if(root == NULL) return 0;
	int lefth = height(root->left)+1;
	int righth = height(root->right)+1;
	return max(lefth, righth);
}

void printLevel(Node* root, int level){
	if(root == NULL){
		return;
	}
	queue<Node*> q;
	q.push(root);
	int i=0;
	while(!q.empty() && i<level){
		cerr<<i<<endl;
		if(q.front() == NULL) q.pop();
		else{
			q.push(q.front()->left);
			q.push(q.front()->right);
			q.pop();
		}
		i++;
	}
	cout<<"LEVEL "<<level<<": ";
	while(!q.empty()){
		cout<<q.front()->data<<",";
		q.pop();
	}
}

int main(){
	BST tree;
	tree.root = new Node(6);
	tree.root->left = new Node(3);
	tree.root->right = new Node(9);
	tree.root->left->left = new Node(1);
	insert(tree.root, 200);
	insert(tree.root, 114);
	insert(tree.root, 1);
	insert(tree.root, 6);
	tree.inOrder(tree.root);
	cout<<endl<<search(tree.root, 113)<<endl;	
	levelOrder(tree.root);
	cout<<endl<<height(tree.root)<<endl;
	printLevel(tree.root, 1);
}
