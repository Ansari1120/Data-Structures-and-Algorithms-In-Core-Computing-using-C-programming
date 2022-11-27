#include<iostream>    //Insertion and traversing in doubly linked list
#include<conio.h>
using namespace std;
struct node{
	int data;
	struct node *next,*prev;
	
};
// insert node at the begining
void insert_begin(struct node** head,int new_data){
struct node* newnode = new node;

// initialize value to new ndoe
   newnode->data = new_data;


// set prev of new node to null & next as head

newnode->next = (*head);
newnode->prev=NULL;

if((*head)!=NULL)
(*head)->prev=newnode;   //if list insn't null then the node new added linked with prev of head node
(*head)=newnode;
}
// insert node in between of a node
void insert_bet(struct node* prev_node, int new_data){
	//check if node is null
	if(prev_node==NULL){
		cout<<"the list is empty , prev node requre to insert new node in between"<<endl;
		return;
	}
	// create object first
	struct node* newnode = new node;
	
	// initialize value to new ndoe
newnode->data = new_data;

	// set next of new node to next of prev node
newnode->next = prev_node->next;
	
	// set next of prev node to new node
	prev_node->next = newnode;
	 // set prev node of new node to prev
	 newnode->prev=prev_node;
	 // set prev of new node's next to new node
	 if(newnode->next!=NULL){
newnode->next->prev = newnode;
	 }
}
// insert node in the end
void insert_end(struct node** head, int new_data)
{
   //allocate memory for node  
   struct node* newnode = new node;

   struct node* last = *head; //set last node value to head

   //set data for new node
   newnode->data = new_data;

   //new node is the last node , so set next of new node to null
   newnode->next = NULL;

   //check if list is empty, if yes make new node the head of list
   if (*head == NULL) {
   newnode->prev = NULL;
   *head = newnode;
    return;
}

//otherwise traverse the list to go to last node
while (last->next != NULL)
last = last->next;

//set next of last to new node
last->next = newnode;

//set last to prev of new node
newnode->prev = last;
return;
}

// This function prints contents of linked list starting from the given node
void print_list(struct node* node) {
   struct node* last;

   while (node != NULL) {
      cout<<node->data<<"<==>";
      last = node;
      node = node->next;
   }
   if(node == NULL)
   cout<<"NULL";
   }
int main(){
	struct node* head=NULL;
	// inserting node at the begining
	insert_end(&head,31);
	// inserting node at the front
    insert_begin(&head,60);
	// inserting node at the end
		insert_end(&head,40);
		// inserting node at the 87 after 31
	insert_bet(head->next,87);
	cout<<"doubly linked list insertion is shown below : "<<endl;
	print_list(head);
	getch();
}

