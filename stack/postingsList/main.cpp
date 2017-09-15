#include "stack.h"

struct node
{
    int data;
    node *next;
    node *jump;
};

void displayLL(node*);
node *createLL();
node *traverseOrder(node*);

int main()
{
    node *head = createLL();   
    displayLL(head); 
    node *result = traverseOrder(head);

}

node *traverseOrder(node* head)
{
    
}


node *createLL()
{
    /* construction of demo linked list  of 6 nodes with jump  */

    node *head; 
    head = new node;
    head = NULL;

    int data1(1), data2(2), data3(3), data4(4), data5(5), data6(6);

    //cout << "here1" << endl;
    node *node1, *node2, *node3, *node4, *node5, *node6;
    node1 = new node;
    node2 = new node;
    node3 = new node;
    node4 = new node;
    node5 = new node;
    node6 = new node;
    //cout << "here2" << endl;
   
    head = node1; 
    //cout << "here3" << endl;

    node1->data = data1;
    node1->next = node2;
    node1->jump = NULL;
    //cout << "here4" << endl;

    node2->data = data2;
    node2->next= node3; 
    node2->jump = node4;
    //cout << "here5" << endl;

    node3->data = data3;
    node3->next = node4;
    node3->jump = node6;
    //cout << "here6" << endl;

    node4->data = data4;
    node4->next = node5;
    node4->jump = node5;;
    //cout << "here7" << endl;

    node5->data = data5;
    node5->next = node6;
    node5->jump = NULL;

    //cout << "here8" << endl;
    node6->data = data6;
    node6->next = NULL;
    node5->jump = NULL;
    //cout << "here9" << endl;

    return head; 
}

void displayLL(node* head)
{
    node *traver;
    traver = head;
    int count = 1;
    while(traver!=NULL)
    {
        if (count < 6)
        {
            if (traver->jump != NULL)
                cout << "node" << count << ": "  << traver->data << "\tnext: " << traver->next->data << "\tjump: " << traver->jump->data << endl;
            else
                cout << "node" << count << ": "  << traver->data << "\tnext: " << traver->next->data << "\tjump: " << "NO JUMP" << endl;

        }
        else
            cout << "node" << count << ": " << traver->data << endl;
        traver = traver->next;
        count += 1;
    }
}

