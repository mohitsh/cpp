#include<iostream>
#include<iomanip>

using namespace std;

struct node
{
	int data;
	node *next;
};

node *insertAtBack(node *);
void displayLL(node *);
node *makeCircle(node *, int);
node *detectCircle(node *);

int main()
{

	node *head, *loopPoint;
	head = new node;
	loopPoint = new node;
	head = NULL;

	head = insertAtBack(head);
	int a;
	cout <<  "circle point: ";
	cin >> a;	

	head = makeCircle(head, a);
	loopPoint = detectCircle(head);
	cout << "point of circling: " << loopPoint->data << endl;
}

node *insertAtBack(node *head)
{
	cout << "Number of nodes: ";
	int m;
	cin >> m;

	for (int i = 0; i<m; ++i)
	{
		cout << "enter node value: ";
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

		else{
			node *t;
			t = head;
			while(t->next != NULL)
				t = t->next;

			temp->next  = t->next;
			t->next = temp;
		}
	}
	return head;
}

node *makeCircle(node *head, int n)
{
	int count=1;
	node *t;
	t = head; // this is the node we want to point at
	while(count <= n)
	{
		t = t->next;
		count += 1;
	}
	node *traver;
	traver = head;
	while(traver->next!=NULL)
		traver = traver->next;
	traver->next = t;
	return head;
}

node *detectCircle(node *head)
{
	node *fast, *slow;
	fast = head;
	slow = head;
	bool flag = true;
	while (flag || fast == NULL || slow == NULL)
	{
		slow = slow->next;
		fast = fast->next;
		fast = fast->next;	
		if (slow==fast)
			flag = false;
	}

	if (flag == false)
		cout << "CIRCLE DETECTED" << endl;

	return fast;
}


void displayLL(node *head)
{
	while(head)
	{
		cout << head->data << endl;
		head = head->next;
	}
}


