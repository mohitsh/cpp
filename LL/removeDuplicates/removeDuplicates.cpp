#include<iostream>
#include<iomanip>

using namespace std;

struct node
{
	int data;
	node *next;
};

void displayLL(node *);
node *insertAtBack(node *);
node *deleteDuplicate(node *);

int main()
{

	node *head;
	head = NULL;

	cout << "here1" << endl;
	head = insertAtBack(head);
	cout << "here2" << endl;
	displayLL(head);
	head = deleteDuplicate(head);
	displayLL(head);
	return 0;
}


void displayLL(node *head)
{

	while(head)
	{
		cout << head->data << endl;
		head = head->next;
	}
}

node *insertAtBack(node *head)
{
	cout << "HERE!" << endl;

	cout << "number of nodes: ";
	int n;
	cin >> n;

	
	for (int i = 0; i<n; ++i)
	{
		cout << "enter node " << i+1 << ": ";
		int new_data;
		cin >> new_data;
		
		node *temp;
		temp = new node;
		temp->data = new_data;

		if (head == NULL)
		{
			temp->next = head;
			head = temp;
		}

		else
		{
			node *traver;
			traver = head;
			while(traver->next != NULL)
				traver = traver->next;

			temp->next = traver->next;
			traver->next = temp;
		}
	}

	return head;
}

node *deleteDuplicate(node *head)
{

	node *traver;	
	traver = head;
	while(traver->next != NULL)
	{
		if (traver->data == traver->next->data)
		{
			node *temp;
			temp = new node;
			temp = traver->next;
			traver->next = temp->next;
			delete temp;
			cout << "this needs to be deleted: " << traver->data << endl;
		}
		traver = traver->next;
	}
	return head;
}
