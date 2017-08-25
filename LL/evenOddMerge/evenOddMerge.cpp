#include<iostream>
#include<iomanip>

using namespace std;

struct node
{
	int data;
	node *next;
};

node *insertNodeAtBack(node *);
node *evenOddMerge(node *);
node *display(node *);

int main()
{
	node *head;
	head = NULL;

	head = insertNodeAtBack(head);		
	head = evenOddMerge(head);
	display(head);
}

node *evenOddMerge(node *head)
{
	node *even, *orig_even; // orig_even points to start of even list
	node *odd, *orig_odd;   // orig_odd points to start of odd list
	even = head;            // even appends even nodes to list
	orig_even = even; 	
	odd = head->next;       // odd appends odd nodes to list
	orig_odd = odd;

	int c = 0;
	while(head->next != NULL)
	{
		if (c>1)
		{
			if (c%2 == 0) // if node location is even then append to even
			{
				even->next = head; 
				even = even->next;
			}
			else // else append to odd
			{
				odd->next = head;
				odd = odd->next;
			}
		}
		c += 1;
		head = head->next;
	}

	// in the end; mount to null
	even->next = NULL;
	odd->next = NULL;

	// list merging
	even->next = orig_odd;	//appending odd list after even
	odd->next = head;       // last element in the end;
	return orig_even;	
}

node *insertNodeAtBack(node *head)
{

	int n;
	cout << "number of nodes: ";
	cin >> n;
		
	for (int i = 0; i<n; ++i)
	{
		int new_data;
		cout << "enter node no " << i+1 << ": ";
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

			temp->next =  traver->next;
			traver->next = temp;
		}
	}

	return head;
}


node *display(node *head)
{
	while(head != NULL)
	{
		cout << head->data << endl;
		head = head->next;
	}
}
