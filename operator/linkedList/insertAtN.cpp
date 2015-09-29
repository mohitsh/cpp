
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
		if (head == NULL)
		{
			node *temp;
			temp = (node*)malloc(sizeof(node));
			temp->data = info;
			temp->next = head;
			head = temp;
		}
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

	cout << "enter the inserttion index: ";
	int index;
	cin >> index;
	cout << "enter node: ";
	int val;
	cin >> val;
	
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
	node *temp4;
	temp4 = (node*)malloc(sizeof(node));
	temp4->data = val;
	temp4->next = temp3->next;
	temp3->next = temp4;

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

	
}



