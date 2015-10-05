
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

	// deleting from front
	node *temp;
	temp = (node*)malloc(sizeof(node));
	temp = head;
	head = temp->next;
	free(temp);
	cout << "After deleting first node" << "\n";
	node *traver;
	traver = head;
	while(traver!=NULL){
		cout << traver->data << " ";
		traver = traver->next;
	}
	cout << "\n";

	// deleting from end
	node *temp1;
	temp1 = (node*)malloc(sizeof(node));
	temp1 = head;
	node *old_temp;
	old_temp = (node*)malloc(sizeof(node));
	old_temp = temp1;
	
	while(temp1->next != NULL){
		old_temp = temp1;
		temp1 = temp1->next;
	}
	
	old_temp->next = temp1->next;
	free(temp1);
	
	cout << "after deleting last node: ";	

	node *tra1;
	tra1 = head;
	while(tra1 != NULL){
		cout << tra1->data << " ";
		tra1 = tra1->next;
	}
	cout << "\n";

	// deleting a particular node
	node *temp2;
	node *old_temp2;
	temp2 = (node*)malloc(sizeof(node));
	old_temp2 = (node*)malloc(sizeof(node));
	temp2 = head;
	old_temp2 = temp2;
	
	cout << "Node index to be deleted: ";
	int node_i;
	cin >> node_i;
	
	for(int i = 0; i<node_i; ++i){
		old_temp2 = temp2;
		temp2 = temp2->next;
	}
	
	old_temp2->next = temp2->next;
	free(temp2);
	
	cout << "after deleting node at index: " << node_i << " ";	
		
	node *tra3;
	tra3 = head;
	while(tra3 != NULL){
		cout << tra3->data << " ";
		tra3 = tra3->next;
	}
	cout << "\n";
	
}













