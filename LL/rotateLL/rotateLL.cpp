#include<iostream>
#include<iomanip>

using namespace std;


struct node
{
	int data;
	node *next;
};

void displayLL(node *);
node *insertNodeAtBack(node *);
node *rotateLL(node *, int);
node *findNextNode(node *, int, int, int);

int main()
{

	node *head;
	head = NULL;

	head = insertNodeAtBack(head);
	displayLL(head);
	
	int k; // rotate steps
	cout << "Enter no of steps to be rotated: ";
	cin >> k;
	head = rotateLL(head, k);
	displayLL(head);
	return 0;
}

node *insertNodeAtBack(node *head)
{
	int n;
	cout << "Enter no of nodes: "; 
	cin >> n;
	
	for (int i = 0; i<n; ++i)
	{
		cout << "enter node value " << i+1 << ": ";
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

node *rotateLL(node *head, int k)
{

	/*
		23 -> 59 -> 75 -> 16 -> 47 -> 22 -> 43	 

		n = 7; k = 3 
		shiftPoint = 7-3 = 4	

		23 -> 59 -> 75 -> 16 | 47 -> 22 -> 43	
		^                 ^                ^
		|                 |                |
		head              breakNode        tail
		
		tail->next = head;
		head = breakNode->next;
		breakNode->next = NULL;

		47 -> 22 -> 43 -> 23 -> 59 -> 75 -> 16
		
	*/
	node *breakNode;
	node *tail;
	breakNode = head;	
	tail = head;

	int n = 0;
	node *traver;
	traver = head;
	while(traver != NULL)
	{
		traver = traver->next;
		n += 1;
	}
	cout << "total nodes: " << n << endl;

	int shiftPoint = n- (k%n);

	while(tail->next != NULL)
		tail = tail->next;	

	for (int i = 1; i<shiftPoint; ++i)
		breakNode = breakNode->next;

	// rotate
	tail->next = head;
	head = breakNode->next;
	breakNode->next = NULL;
	return head;	
	
}


void displayLL(node *head)
{
	while(head != NULL)
	{
		cout << head->data << endl;
		head = head->next;
	}

}
