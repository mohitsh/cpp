#include<iostream>
#include<iomanip>


/*  INPUT TWO LINKED LISTS  -> SORT THEM -> MERGE THEM   */
using namespace std;

struct node
{
	int data;
	node *next;
};

node *insertNodeAtBack(node *, int n);
node *mergeSortedLL(node*, node*);
node *appendNode(node *, int);
void displayLL(node *);

int main()
{
	node *head1, *head2, *mergedLL;
       	head1 = head2 = NULL;
	head1 = insertNodeAtBack(head1, 1);
	cout << "currently head1 is pointed at: " << head1->data << endl;;
	head2 = insertNodeAtBack(head2, 2);
	cout << "currently head2 is pointed at: " << head2->data << endl;
	mergedLL = mergeSortedLL(head1, head2);

	
	displayLL(head1);
	displayLL(head2);
	displayLL(mergedLL);
	return 0;
}

void displayLL(node *head)
{
	node *traver;
	traver = head;
	while(traver != NULL)
	{
		cout << traver->data << endl;
		traver = traver->next;
	}
	cout << endl;
}

node *insertNodeAtBack(node *head, int n)
{
	int n1, n2;
	cout << setw(20) <<  "INPUT LINKED LIST " << n << " : " << endl; 
	cout << "number of elementss in LL " << n << ": " ;
	cin >> n1;

	for (int i = 0; i < n1; ++i)
	{
		int new_data;
		cout << "enter value for node " << i+1 << " : "; 	
		cin >> new_data;

		if (head == NULL)
		{
			node *temp;
			temp = new node;
			temp->data = new_data;
			temp->next = head;
			head = temp;
		}
		else
		{
			node *traver;
			traver = new node;
			traver = head;
			while(traver->next != NULL)
				traver = traver->next;
			node *temp;
			temp = new node;
			temp->data = new_data;
			temp->next = traver->next;
			traver->next = temp;
			
		}

	}
	return head;
}

node *appendNode(node *head, int new_data)
{
		if (head == NULL)
		{
			node *temp;
			temp = new node;
			temp->data = new_data;
			temp->next = head;
			head = temp;
		}
		else
		{
			node *traver;
			traver = new node;
			traver = head;
			while(traver->next != NULL)
				traver = traver->next;
			node *temp;
			temp = new node;
			temp->data = new_data;
			temp->next = traver->next;
			traver->next = temp;
		}
	return head;
}


node *mergeSortedLL(node* head1, node* head2)
{	
	node *head;	
	head = new node;
	head = NULL;	

	while(head1 && head2)
	{
		if (head1->data > head2->data)
			head = appendNode(head, head1->data);
		else
			head = appendNode(head, head2->data);	
		head1 = head1->next;
		head2 = head2->next;
	}
	return head;
}

