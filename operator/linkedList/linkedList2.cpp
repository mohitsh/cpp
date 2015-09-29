
#include <iostream>

struct node{

	int data;
	node *next;
};

int main(){

	using namespace std;
	node *head;
	head = NULL;
	int n;
	cout << "enter number of nodes: " << "\n";
	cin >> n;
	int info;
	
	for (int i = 0; i<n; ++i){

		cout << "enter node: ";
		cin >> info;
		
		if (head == NULL)
		{
			node *temp;
			temp = (node*)malloc(sizeof(node));
			temp->data = info;
			temp->next = head;
			head = temp;
			
		}
		else
		{
			node *temp1;	
			temp1 = (node*)malloc(sizeof(node));	
			temp1 = head;
			while(temp1->next != NULL)
				temp1 = temp1->next;
			node *temp;
			temp = (node*)malloc(sizeof(node));
			temp->data = info;
			temp->next = NULL;
			temp1->next = temp;
		}
		cout << "\n";
			
}

	node *temp2;
	temp2 = head;
	if(temp2 == NULL){
		cout << "empty list " << "\n";
	}

	else
	{
		cout << "Linked list: " << "\n";
		while (temp2 != NULL){
			cout << temp2->data << " ";
			temp2 = temp2->next;
		}
		cout << "\n";
	}

}
