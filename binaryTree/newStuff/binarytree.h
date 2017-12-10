struct node
{
    int data;
    node *left;
    node *right;
};

struct node* newNode(int data)
{
    node *new_node;
    new_node = new node;

    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}
