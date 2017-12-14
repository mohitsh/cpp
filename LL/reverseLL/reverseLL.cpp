#include<iostream>
#include<iomanip>

using namespace std;

struct node
{
	int data;
	node *next;
};

node *insertNodeAtBack(node *);
void displayLL(node *);
node *reverseLL(node *);
node *recurReverse(node *);

int main()
{
	node *head;
	head = new node;
	head = NULL;
	head = insertNodeAtBack(head);
	//displayLL(head);
	//head = reverseLL(head);
        head = recurReverse(head);
        cout << "reversed List: " << endl;
	displayLL(head);
}


node *insertNodeAtBack(node *head)
{
	int n;
	cout << setw(20) << "Number of nodes: ";
	cin >> n;	

	for (int i = 0; i<n; ++i)
	{
		int new_data;
		cout << "Enter node data: ";
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

void displayLL(node *head)
{
	node *temp;
	temp = head;
	
	while(temp != NULL)
	{
		cout << temp->data << endl;
		temp = temp->next;
	}
}

node *reverseLL(node *head)
{
	node *curr, *next, *prev;
	next = prev = NULL;
	curr = head;

	while(curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	head = prev;
	return head;

}


node *recurReverse(node *head)
{
  if (head->next == nullptr) return head;

  node *new_head = recurReverse(head->next);

  head->next->next = head;
  head->next = nullptr;

  return new_head;

}


