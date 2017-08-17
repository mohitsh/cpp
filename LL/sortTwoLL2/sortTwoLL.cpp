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
void mergeSortedLL(node*, node*);
void displayLL(node *);

int main()
{
	node *head1, *head2, *mergedLL;
       	head1 = head2 = NULL;
	head1 = insertNodeAtBack(head1, 1);
	head2 = insertNodeAtBack(head2, 2);

	cout << setw(20) << "LL1: " << endl;	
	displayLL(head1);
	cout << setw(20) << "LL2: " << endl;
	displayLL(head2);
	cout << setw(20) << "MERGED LL: " << endl;
	mergeSortedLL(head1, head2);
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



void mergeSortedLL(node* head1, node* head2)
{	
	while (head1 && head2)
	{
		if (head1->data > head2->data)
		{
			cout << head2->data << endl;
			cout << head1->data << endl;
		}
		else
		{
			cout << head1->data << endl;
			cout << head2->data << endl;
		}
		head1 = head1->next;
		head2 = head2->next;
	}
}


