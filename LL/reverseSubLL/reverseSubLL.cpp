#include<iostream>
#include<iomanip>

using namespace std;

struct node
{
	int data;
	node *next;
};


node *insertAtBack(node *);
node *reverseSubList(node *);
void displayLL(node *);

int main()
{
	node *head;
	head = new node;
	head = NULL;

	head = insertAtBack(head);
	displayLL(head);

	head = reverseSubList(head);
	displayLL(head);
	return 0;
}


node *insertAtBack(node *head)
{

	cout << "number of nodes: ";
	int n;
	cin >>  n;
	
	for (int i = 0; i<n; ++i)
	{
		node *temp;
		temp = new node;
		int new_data;	
		cout << "Enter Node Value: ";
		cin >> new_data;
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

			while(traver->next!=NULL)
				traver = traver->next;
			temp->next = traver->next; 
			traver->next = temp;
		}
	}

	return head;
}

void displayLL(node *head)
{
	while(head)
	{
		cout << head->data;
		cout << endl;
		head = head->next;
	}
}

node *reverseSubList(node *head)
{	

	int a,b;
	cout << "Enter a: ";  // starting point of sublist
	cin >> a;
	cout << "Enter b: "; // ending point of sublist
	cin >> b;

	node *traver, *boundry1, *boundry2;
	boundry2 = new node;  // pointing to node next to starting node
	boundry1 = new node;  // pointing to starting node of sublist
	traver = head;

	// head is already point at location 0 
	for (int i = 1; i<a; ++i)
		traver=traver->next;

	boundry1 = traver;  
	boundry2 = traver->next;

	node *prev, *curr, *next;
	prev = next = boundry1;
	curr = boundry2;

	//cout << "prev: " << prev->data << endl;
	//cout << "curr: " << curr->data << endl;
	//cout << "next: " << next->data << endl;

	int count = a;
	while(count < b)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
		count += 1;
	}

	boundry1->next = prev;
	boundry2->next = curr;
	return head;

}
