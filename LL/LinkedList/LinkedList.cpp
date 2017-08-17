#include<iostream>
#include<iomanip>
#include<typeinfo>

using namespace std;


struct node
{
	int data;
	node *next;
};

void traverseLL(node *);
node *insertAtFront(node *);
node *insertAtBack(node *);
node *insertAtnPosition(node *);
node *deleteFromFront(node *);
node *deleteFromBack(node *);
node *deleteNthNode(node *);
node *sortLL(node *);

void displayOptions();

int main()
{

	node *head = NULL;
	int choice;

	cout << setw(20) << "\nCREATE A SINGLY LINKED LIST:\n" << endl;
	displayOptions();

	cout << setw(20) << "ENTER YOUR CHOICE: ";
	cin >> choice;

	while (choice != 0)
	{
		switch(choice)
		{
			case 1:
				head = insertAtFront(head);	
				cout << "\nAFTER INSERTING AT FRONT\n" <<endl;
				traverseLL(head);
				break;

			case 2:
				head = insertAtBack(head);
				cout << "\nAFTER INSERTING AT BACK\n" << endl;
				traverseLL(head);
				break;

			case 3:
				head = insertAtnPosition(head);	
				cout << "\nAFTER INSERTING AT POSITION N\n" << endl;
				traverseLL(head);
				break;

			case 4:
				head = deleteFromFront(head);	
				cout << "\nAFTER DELETING FROM FRONT \n";
				traverseLL(head);
				break;

			case 5:
				head = deleteFromBack(head);	
				cout << "\nAFTER DELETING FROM BACK \n" << endl;
				traverseLL(head);
				break;

			case 6:
				head =  deleteNthNode(head);
				cout << "\nAFTER DELETING FROM nth Position \n" << endl;
				traverseLL(head);
				break;

			case 7:
				head = sortLL(head);
				cout << "\nSORTED LINKED LIST" << endl;
				traverseLL(head);
				break;

			default:
				displayOptions();	
				break;

		}
	cout << setw(20) << "ENTER YOUR CHOICE (0 to Terminate): ";
	cin >> choice;
	}
	return 0;
}

void traverseLL(node *head)
{
	// TRAVERSAL 
	cout << "LINKED LIST: " << endl;
	node *traver;
	traver = head;

	while (traver != NULL){
		cout << setw(10) << "Node data: " << traver->data << endl;
		traver = traver->next;
	}
}

node *insertAtFront(node *head)
{
	int n;
	cout << "number of nodes: ";
	cin >> n;

	/* INSERT AT FRONT */
	for (int i = 0; i<n; ++i)
	{
		node *temp;      	// create a new node
		temp = new node; 	// allocate memory

		int new_data;    	// input data
		cout << "enter node value: ";
		cin >> new_data;

		temp->data = new_data;	// add input data to node
		temp->next = head; 	// add node to front
		head = temp;	
	}
	cout << "TYPE: " << typeid(head).name() << endl;
	return head;
}

node *insertAtBack(node *head)
{
	int n;
	cout << "number of nodes: ";
	cin >> n;

	for (int i = 0; i<n; ++i)
	{
		int new_data;
		cout << "enter node value: ";
		cin >> new_data;

		node *temp;
		temp = new node;
		temp->data = new_data;

		node *traver;
		traver = new node;
		traver = head;


		// if no element in linkedList
		if (head == NULL)
		{
			temp->next = head;
			head = temp;

		}

		else{
			while(traver->next != NULL)
				traver = traver->next;

			//cout << "reached at the end: " << traver->data << endl;
			traver->next = temp;
			temp = head;
		}
	}
	return head;

}

node *insertAtnPosition(node *head)
{
	int loc;
	cout << "insert position: ";
	cin >> loc;

	node *traver;
	traver = new node;
	traver = head;

	int count = 0;	
	while(count < loc-1)
	{
		traver = traver->next;
		count += 1;
	}

	cout << "insert node value: ";
	int new_data;
	cin >> new_data;
	
	node *temp;
	temp = new node;
	temp->data = new_data;

	temp->next = traver->next;
	traver->next = temp; 
	return head;

}

node *deleteFromFront(node *head)
{
	node *firstNode;
	firstNode = new node;
	
	firstNode = head;
	head = firstNode->next;
	delete(firstNode);
	return head;

}

node *deleteFromBack(node *head)
{
	node *temp1; 
	node *temp2; // styas one step behind temp1

	temp1 = new node;
	temp2 = new node;
	temp1 = head;
	temp2 = head;
	
	while (temp1->next != NULL)
	{
		temp2 = temp1;
		temp1 = temp1->next;
	}

	//cout << "currently temp2 is pointed at: " << temp2->data <<  " and temp1 is pointer at: " << temp1->data << endl;

	temp2->next = NULL;	
	delete temp1;

	return head;
}

node *deleteNthNode(node *head)
{
	int position;
	cout << "Input the position to be deleted: ";
	cin >> position;

	node *old_temp;
	node *new_temp;
	old_temp = new node;
	new_temp = new node;
	old_temp = head;
	new_temp = head;

	int count = 0;
	while (count < position)
	{
		old_temp = new_temp;
		new_temp = new_temp->next;
		count += 1;
	}

	cout << "after traversal old_temp is at: " << old_temp->data  << " and new_temp is at: " << new_temp->data << endl;	

	old_temp->next = new_temp->next;
	delete new_temp;
	return head;	
}

node *sortLL(node *head)
{
	node *temp1;
	node *temp2;

	temp1 = new node;
	temp2 = new node;

	for (temp1 = head; temp1 != NULL; temp1 = temp1->next)
	{
		for (temp2 = temp1->next; temp2 != NULL; temp2 = temp2->next)
		{
			if (temp1->data > temp2->data)
			{
				int val = temp1->data;
				temp1->data = temp2->data;
				temp2->data = val;
			}
		}
	}
			
	return head;
}

void displayOptions()
{
	cout << "1: " << setw(5) << "INSERT AT FRONT" << endl;
	cout << "2: " << setw(5) << "INSERT AT BACK" << endl;
	cout << "3: " << setw(5) << "INSERT AT Nth POSITION" << endl;
	cout << "4: " << setw(5) << "DELETE FROM FRONT" << endl;
	cout << "5: " << setw(5) << "DELETE FROM BACK" << endl;
	cout << "6: " << setw(5) << "DELETE FROM Nth POSITION" << endl;
	cout << "7: " << setw(5) << "SORT THE LINKED LIST" << endl;
	cout << "0: " << setw(5) << "TERMINATE" << endl;
}

