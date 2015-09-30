
#include <iostream>

struct node{
	int data;
	node *next;
}; 

int main(){
	using namespace std;
	node *head;
	head = NULL;
	cout << "Number of nodes: ";
	int n;
	cin >> n;
	for (int i = 0; i<n; ++i){
		cout << "value of node: ";
		int val;
		cin >> val;
		cout << "index: ";
		int index;
		cin >> index;
		
		if (index == 0){
			node *temp;
			temp = (node*)malloc(sizeof(node));
			temp->data = val;
			temp->next = head;
			head = temp;
		}
		else{
			node *temp;
			temp = (node*)malloc(sizeof(node));
			temp = head;
			for(int i=1;i<index;++i)
				temp = temp->next;

			node *temp1;
			temp1 = (node*)malloc(sizeof(node));
			temp1->data = val;
			temp1->next = NULL;
			temp->next = temp1;
		}
	
	node *temp;
	temp = head;
	while(temp!=NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "\n";
}
}
