



    //1.linked list insertion
#include<iostream>
using namespace std;
class Node{
	public :
	int data;
	Node* next;
};
void prepend(Node** head,int new_data){
	
Node* new_node=new Node();

new_node->data=new_data;

new_node->next=(*head);

(*head)=new_node;
	
}
void append(Node** head,int new_data){
	Node* new_node=new Node();
		Node* last=*head;
	new_node->data=new_data;
	new_node->next=NULL;

	 if (*head == NULL)
    {
        *head = new_node;
        return;
    }
	while(last->next!=NULL){
		last=last->next;
		
	}
	last->next=new_node;
	return;
}
void insert_between(Node* prev_node,int new_data){

	while(prev_node==NULL){
	cout<<"previos value does not exist , after which you want to insert another value."<<endl;
	}
	
	Node* new_node=new Node();

new_node->data=new_data;
new_node->next=prev_node->next;
prev_node->next=new_node;
}
void Display(Node *print){
	while(print != NULL){
		cout<<" "<<print->data;
	print=print->next;
	}
}
int main(){
	Node* head=NULL;
	append(&head,56);
	prepend(&head,4);
	prepend(&head,19);
	prepend(&head,21);
	cout<<"\nbefore Insertion : "<<endl;

	Display(head);
		cout<<"\nafter Insertion : "<<endl;
			
	insert_between(head->next,9);
		Display(head);
	return 0;
	
}
