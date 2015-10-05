
#include <iostream>

struct node{
	int data;
	node *next;
};

int main(){

	node *head;
	head = NULL;
	using namespace std;
	int n;
	cout << "no of nodes to be inserted: ";
	cin >> n;
	for (int i = 0; i < n; ++i){
		int info;
		cout << "enter node: ";
		cin >> info;
		
		if (head == NULL){
			node *temp;
			temp = (node*)malloc(sizeof(node));
			temp->data = info;
			temp->next = head;
			head = temp;
		}
		else{
			node *temp;
			temp = (node*)malloc(sizeof(node));
			temp = head;
			while(temp->next != NULL){
				temp = temp->next;
			}
			node *temp1;
			temp1 = (node*)malloc(sizeof(node));
			temp1->data = info;
			temp->next = temp1;
			temp1->next =NULL;
		}

	}
	node *temp;
	temp = (node*)malloc(sizeof(node));
	temp = head;
	while(temp!=NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}	
	cout << "\n";
}
