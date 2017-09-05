#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

struct node
{
	int data;
	node *next;
};

node *insertNodeAtBack(node *);
void display(node *);
node *checkPalindrome(node *);


int main()
{
	node *head;
	head = NULL;
	head = insertNodeAtBack(head);
	display(head);
	head = checkPalindrome(head);
}

node *insertNodeAtBack(node *head)
{

	int n;
	cout << "enter number of nodes: ";
	cin >> n;

	for (int i = 0; i<n; ++i)
	{
		int new_data;
		cout << "enter node value: " << i+1 << ": ";
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
			while(traver->next!=NULL)
				traver = traver->next;
			temp->next = traver->next;
			traver->next = temp;
		}
	}
	return head;
}

node *checkPalindrome(node *head)
{
	int n = 1;
	node *traver;
	traver = head;
	while(traver->next != NULL)
	{
		n += 1;
		traver = traver->next;
	}

	int mid_point;

	mid_point = ceil(n/2);


	// if n is even reverse the second part of linked list
	// if n is odd reverse the leave the mid point and reverse the second half
	
	cout << "value of n: " << n << endl;
	if (n%2==0)
	{
		node *traver;
		traver = head;
		int count = 0;
		while(count < mid_point)
		{
			traver = traver->next;
			count += 1;
		}

		cout << "current position: " << traver->data << endl;
		node *prev, *next, *curr;
		prev = next = NULL;
		curr = traver;
		node *ll2_start; // marks the start of second list 
		ll2_start = curr;
		while(curr != NULL)
		{
			next = curr->next;
			curr->next = prev;
			prev = curr;
			curr = next;
		}
		node *tail;
		tail = prev;
		cout << "THE TAIL NODE: " << tail->data << endl;
		cout << "THE ORIGINAL NODE: " << ll2_start->data << endl;

		// traverse the node in reverse order
		node *dude;
		dude = prev;
		while(dude != ll2_start)
		{
			cout << dude->data << endl;
			dude = dude->next;
		}
		cout << dude->data << endl;
	}

	return head;
}


void display(node *head)
{
	while(head!=NULL)
	{
		cout << head->data << endl;
		head = head->next;
	}
}
