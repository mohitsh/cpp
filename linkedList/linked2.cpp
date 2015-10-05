
#include <iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};

int main()
{

	node *head;
	head = NULL;	
	
	cout << "Total Number of Nodes: " << endl;
	int n;
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		cout << "Enter node data: " << endl;
		int info;
		cin >> info;
		
		if(head == NULL)
		{
			node *temp;			
			temp = (node*)malloc(sizeof(node));
			temp->data = info;
			temp->next = head;
			head = temp;
		}
		else
		{
			node *temp;
			temp = (node*)malloc(sizeof(node));
			temp = head;
			while(temp->next != NULL)
				temp = temp->next;
			node *temp1;
			temp1 = (node*)malloc(sizeof(node));
			temp1->data = info;
			temp1->next = NULL;
			temp->next = temp1;
		}
	}			
	
	node *temp1;
	//temp1 = (node*)malloc(sizeof(node));
	temp1 = head;
	if (temp1 == NULL)
		cout << "empty list " << endl;
	else
	{
		cout << "linked list " << endl;
		while (temp1 != NULL)
		{
			cout << temp1->data << " ";
			temp1 = temp1->next;
		}
	}
	cout << endl;
		

	return 0;
}


















