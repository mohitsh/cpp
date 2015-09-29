
#include <iostream>

struct node{

	int data;
	node *next;
};

int main(){
	
	using namespace std;
	cout << "no of nodes: " << "\n";
	int n;
	cin >> n;
	
	node *head;
	head = NULL;
	int counter = 0;
	int info;

	for (int i = 0; i < n; ++i)
	{
		cout << "enter a node: ";
		cin >> info;
	
	if (head == NULL)
	{
		node *temp;
		temp = (node*)malloc(sizeof(node));
		temp->data = info;
		temp->next = head;
		head = temp;
		cout << temp->data << "\n";
		counter++;	
	}
	else
	{
		node *temp1;
		temp1 = (node*)malloc(sizeof(node));
		temp1 = head;
		while (temp1->next != NULL)
			temp1 = temp1->next;
		node *temp;
		temp = (node*)malloc(sizeof(node));
		temp->data = info;
		temp->next = NULL;
		temp1->next = temp;
		cout << temp->data << "\n";
		
	}
		cout << "head pointer: " << head << "\n";

	}

	// linked list traversal
	
	node *temp2;
	//cout << "head: " << head << "\n";
	temp2 = head;
	if (temp2 == NULL)
	{
		cout << "the linked list is empty " << "\n";
	}
	else
	{
		cout << "Linked List: " << "\n";
		while (temp2 != NULL)
		{
			cout << temp2->data << " ";
			temp2 = temp2->next;
		}	
		cout << "\n";
	}

}	
