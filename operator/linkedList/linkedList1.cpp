
#include <iostream>

struct node{
	int x;
	node *next;
};

int main(){
	node *root;
	node *conductor;
	
	root = new node;
	root -> x = 12;
	root -> next = 0;
	conductor = root;
	if (conductor != 0){
		while (conductor -> next != 0){
			conductor = conductor->next;
		}
	}
	conductor -> next = new node;
	conductor = conductor -> next;
	conductor -> next = 0;
	conductor -> x = 42;
}
