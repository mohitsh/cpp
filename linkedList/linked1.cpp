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
	
	int n; 
	cout << "enter number of nodes: " << endl;
	cin >> n;

	for (int i = 0; i<n; i++)
	{
		int info;
		cout << "enter your node: " << endl;
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
			while (temp1->next != NULL)
				temp1 = temp1->next;
			node *temp;
			temp = (node*)malloc(sizeof(node));
			temp->data = info;
			temp1->next = temp;
			temp->next = NULL;
		} 			
		
	}
	
	node *temp2;
	temp2 = head;
	if (temp2 == NULL)
		cout << "empty linked list: " << endl;

	else
	{
		cout << "Linked List: " << endl;
		while(temp2!=NULL)
		{
			cout << temp2->data << " ";
			temp2 = temp2->next;
		}
		cout << endl;
	}
	
	
	
	return 0;	
}






