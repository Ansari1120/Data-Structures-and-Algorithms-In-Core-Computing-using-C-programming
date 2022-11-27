#include<iostream>          //1.linked list deletion
using namespace std;
class Node{
	public :
	int data;
	Node* next;
	int key;
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

		 //5.deleting a node 
	 void delete_node(Node** head,int k){
	 	 Node* temp = *head;
    Node* prev = NULL;
	 	if(head==NULL){
	 		cout<<"linked list already empty nothing here to delete."<<endl;
		 }
		 else if(temp != NULL && temp->data == k){
		 	*head = temp->next;
		 	temp=NULL;
		 	cout<<"node is deleted"<<endl;	
	}
			 else{
			 
			 	while(temp != NULL && temp->data != k){
			 		
			 		prev = temp;
        temp = temp->next;
					 
				 }
				 if(temp!=NULL){
				 	prev->next=temp->next;
				 	cout<<"node unlinked with the value provided : "<<k<<endl;
				 }
				 else{
				 	cout<<"node does not exist with key value provided : "<<k<<endl;
				 }
			 }
		 }
		 void Display(Node *print){
	while(print != NULL){
		cout<<" "<<print->data;
	print=print->next;
	}
}
int main(){
	Node* head=NULL;
		cout<<"original linked list : "<<endl;
	append(&head,56);
	prepend(&head,4);
	prepend(&head,19);
	prepend(&head,21);
	
	cout<<"\nbefore Insertion : "<<endl;

	Display(head);
		cout<<"\nafter Insertion : "<<endl;
			
	insert_between(head->next,9);
		Display(head);
			cout<<"\nafter deletion : "<<endl;

		delete_node(&head,19);
	Display(head);
	return 0;
	
}
