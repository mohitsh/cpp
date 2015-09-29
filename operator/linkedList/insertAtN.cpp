
#include <iostream>

struct node{

	int data;
	node *next;
};


int main(){

	node *head;
	head = NULL;
	using namespace std;
	int n;
	int info;
	cout << "Number of nodes to be inserted: " << "\n";
	cin >> n;
	for (int i = 0; i<n; ++i)
	{
		cout << "Enter the Node: ";
		cin >> info;

	// Entering your first node
		if (head == NULL)
		{
			node *temp;
			temp = (node*)malloc(sizeof(node));
			temp->data = info;
			temp->next = head;
			head = temp;
		}
	// entering modes after first node
		else
		{
			node *temp1;
			temp1 = (node*)malloc(sizeof(node));
			temp1 = head;
			while (temp1->next != NULL)
				temp1 = temp1->next;
			node *temp;
			temp = (node*)malloc(sizeof(node));
			temp->data = info;
			temp->next = NULL;
			temp1->next = temp;
		}
	}
	
	// traversing and printing the linked list
	node *temp2;
	temp2 = head;
	
	if (temp2 == NULL)
		cout << "Linked List is empty" << "\n";
	else{
		while(temp2 != NULL){
			cout << temp2->data << " ";
			temp2 = temp2->next;
		}
		cout << "\n";
	}

	cout << "enter the insertion index: ";
	int index;
	cin >> index;
	cout << "enter node: ";
	int val;
	cin >> val;
	
	// find the index to enter at
	node *temp3;	
	temp3 = (node*)malloc(sizeof(node));
	temp3 = head;
	for (int i = 1; i<index; ++i)
	{
		temp3 = temp3->next;
		if (temp3 == NULL){
			cout << index << " this node is not present! " << "\n";
			break;
		}
	}
	// now make a node and insert at that index
	if (temp3 != NULL){
	node *temp4;
	temp4 = (node*)malloc(sizeof(node));
	temp4->data = val;
	temp4->next = temp3->next;
	temp3->next = temp4;
	}

	// traverse the linked list once again
	node *temp5;
        temp5 = head;

        if (temp5 == NULL)
                cout << "Linked List is empty" << "\n";
        else{
                while(temp5 != NULL){
                        cout << temp5->data << " ";
                        temp5 = temp5->next;
                }
                cout << "\n";
        }

	// deleting from front
	node *temp6;
	temp6 = (node*)malloc(sizeof(node));
	temp6=head;
	head = temp6->next;
	free(temp6);
	
	// traversing again
	cout << "after deleting from front " << "\n";
	node *temp7;
	temp7 = head;
	if (temp7 == NULL)
		cout << "okay! No element present " << "\n";
	else{
		while (temp7 != NULL){
			cout << temp7->data << " ";
			temp7 = temp7->next;
		}
	}
	cout << "\n";

	// deleting from back
	node *temp8;
	temp8 = (node*)malloc(sizeof(node));
	temp8 = head;
	node *old_temp;
	old_temp = (node*)malloc(sizeof(node));
	while(temp8->next!=NULL){
		old_temp = temp8;
		temp8 = temp8->next;
	} 
	old_temp->next = NULL;
	free(temp8);

	// lets traverse again after deleting last node
	cout << "after deleting last node ->" << "\n";
	node *temp9;
	temp9 = (node*)malloc(sizeof(node));
	temp9 = head;
	if (temp9 == NULL)
		cout << "empty ";
	else{
		while(temp9!=NULL){
			cout << temp9->data << " ";
			temp9 = temp9->next;
		}
	}
	cout << "\n";

	// deleting node at a specific index;
	
	node *temp10;
	temp10 = (node*)malloc(sizeof(node));
	temp10 = head;
	
	node *old_temp1;
	old_temp1 = (node*)malloc(sizeof(node));
	old_temp1 = temp10;
	
	int del;
	cout << "enter the node to be deleted: ";
	cin >> del;
	
	for (int i = 1; i < del; i++){
		old_temp1 = temp10;
		temp10 = temp10->next;
	}
	old_temp1->next = temp10->next;
	free(temp10);
	
	cout << "deleting node at a given index " << "\n";

	node *temp11;
	temp11 = (node*)malloc(sizeof(node));
	temp11 = head; 
	
	if (temp11 == NULL)
		cout << "empty" << "\n";
	else{
		while (temp11 != NULL){
			cout << temp11->data << " ";
			temp11 = temp11->next;
		}
	cout << "\n";
	}	
		

}



