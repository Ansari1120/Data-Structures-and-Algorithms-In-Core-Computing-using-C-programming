#include<iostream>     
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;
};

void insertEnd(struct Node** start, int value)
{
	if (*start == NULL)
	{
		struct Node* new_node = new Node;
		new_node->data = value;
		new_node->next = new_node->prev = new_node;
		*start = new_node;
		return;
	}
	Node *last = (*start)->prev;
	struct Node* new_node = new Node;
	new_node->data = value;
	new_node->next = *start;
	(*start)->prev = new_node;
	new_node->prev = last;
	last->next = new_node;
}

void insertBegin(struct Node** start, int value)
{	struct Node *last = (*start)->prev;

	struct Node* new_node = new Node;
	new_node->data = value; 

	new_node->next = *start;
	new_node->prev = last;

	last->next = (*start)->prev = new_node;

	*start = new_node;
	
}

void insertAfter(struct Node** start, int value1,
									int value2)
{
	struct Node* new_node = new Node;
	new_node->data = value1; 
	struct Node *temp = *start;
	while (temp->data != value2)
		temp = temp->next;
	struct Node *next = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
	new_node->next = next;
	next->prev = new_node;
}


void display(struct Node* start)
{
	struct Node *temp = start;

	cout<<"\nTraversal in forward direction  \n"<<endl;
	while (temp->next != start)
	{
		cout<<" "<<temp->data;
		temp = temp->next;
	}
	cout<<" "<<temp->data;

	cout<<"\nTraversal in reverse direction  \n"<<endl;
	Node *last = start->prev;
	temp = last;
	while (temp->prev != last)
	{
		cout<<" "<<temp->data;
		temp = temp->prev;
	}
	cout<<" "<<temp->data;
}

int main()
{
	struct Node* start = NULL;

	insertEnd(&start, 5);

	insertBegin(&start, 4);

	insertEnd(&start, 7);


	insertEnd(&start, 8);


	insertAfter(&start, 6, 5);

	cout<<"Created circular doubly linked list is: "<<endl;
	display(start);

	cout<<"\ninsertion : ";

	insertAfter(&start, 2, 4);
	
	display(start);

return 0;
}


